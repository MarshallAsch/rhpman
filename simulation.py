#!/usr/bin/env python3

#
#   Note this script is not designed to be run from this directory this is here so that it can be shared with the rest
#   of the lab group as an example. This should be run from outside of the ns3 folder, currently in an example folder
#
#  /
#      ns-3-allinone/
#          .....
#      experiment/
#          simulation.py
#
#   This script should be run from the experiment directory
#

import sem
import seaborn as sns
import matplotlib.pyplot as plt
import pandas as pd
import numpy as np
import os
import requests
import copy
import time
import itertools
from datetime import timedelta


num_runs = 30

experimentName = os.environ.get('NS3_EXPERIMENT', 'rhpman_v6')
ns_path = os.environ.get('NS3_ROOT', '../allinone2/ns-3.32')
script = os.environ.get('NS3_SCRIPT', 'rhpman-example')
discord_url = os.environ.get('DISCORD_URL')
results_path = os.environ.get('RESULTS_DIR', os.getcwd())
optimized = os.environ.get('BUILD_PROFILE', 'optimized') == 'optimized'
numThreads = int(os.environ.get('NUM_THREADS', 0))

numThreads = None if numThreads == 0 else numThreads

def getNumNodes(param):
    return param['totalNodes']

def getCarryingThreshold(param):
    if param['hops'] == 2 and param['totalNodes'] == 160:
        return [0.0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1.0]
    else:
        return [0.4]

def getForwardingThreshold(param):
    if param['hops'] == 2 and param['totalNodes'] == 160 and param['carryingThreshold'] == 0.4:
        return [0.0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1.0]
    else:
        return [0.6]

param_combination = {
    'runTime': [2400],
    'waitTime': [600],
    'lookupTime': [30],
    'updateTime': [120],
    'dataSize': [512],
    'profileUpdateDelay': [6],

    'totalNodes': [160, 200], #[40, 80, 120, 160, 200],
    'storageSpace': lambda p: p['totalNodes'],
    'bufferSpace': lambda p: p['totalNodes'],

    'wcdc': [0.5],
    'wcol': [0.5],

    'hops': lambda p: [2] if p['totalNodes'] != 160 else [1, 2, 3, 4, 5],
    'replicationHops': [4],

    'carryingThreshold': getCarryingThreshold,
    'forwardingThreshold': getForwardingThreshold,

    'percentDataOwners': [10],
    'areaWidth': [1000],
    'areaLength': [1000],

    'gridRows': [4],
    'gridCols': [4],
    'wifiRadius': [100],
    'partitionNodes': [8],

    'travellerVelocity': [20],
    'travellerWalkMode': ['time'],
    'travellerWalkTime': [100],
    'pbnVelocityMin': [1],
    'pbnVelocityMax': [10],
    'pbnVelocityChangeAfter': [100],
    'routing': ['dsdv'],
    'travellerWalkDist': [0],
    'requestTimeout': [0],
    'peerTimeout': [12],
    'electionPeriod': [6],
    'electionCooldown': lambda p: p['electionPeriod'],

    'storageWeight': [ 0.5 ],
    'energyWeight': [ 0.5 ],
    'processingWeight': [0],
    'lowPowerThreshold': [0.4],

    # optional parameters
    'staggeredStart': [True, False],
    'optionCarrierForwarding': [True, False],
    'optionalCheckBuffer':  [True, False],
    'optionalNoEmptyTransfers': lambda p: [True, False] if p['optionCarrierForwarding'] == p['optionalCheckBuffer'] == False else [False],
}

# change the params for the carrying
carrying_params = copy.deepcopy(param_combination)
carrying_params['totalNodes'] = 160
carrying_params['hops'] = 2
carrying_params['forwardingThreshold'] = 0.6
carrying_params['optionalNoEmptyTransfers'] = False

# change the params for the forwarding
forwarding_params = copy.deepcopy(param_combination)
forwarding_params['totalNodes'] = 160
forwarding_params['hops'] = 2
forwarding_params['carryingThreshold'] = 0.4
forwarding_params['optionalNoEmptyTransfers'] = False

# change the params for the change in number of nodes
totalnodes_params = copy.deepcopy(param_combination)
totalnodes_params['hops'] = 2
totalnodes_params['carryingThreshold'] = 0.4
totalnodes_params['forwardingThreshold'] = 0.6
totalnodes_params['optionalNoEmptyTransfers'] = False

# change the params for the hops
hops_params = copy.deepcopy(param_combination)
hops_params['totalNodes'] = 160
hops_params['carryingThreshold'] = 0.4
hops_params['forwardingThreshold'] = 0.6
hops_params['optionalNoEmptyTransfers'] = False


ID_VARS = ['hops', 'totalNodes', 'carryingThreshold', 'forwardingThreshold', 'staggeredStart', 'optionCarrierForwarding', 'optionalCheckBuffer', 'optionalNoEmptyTransfers']
COLLISION_VALUE_VARS = ['FinalTotalSent', 'FinalTotalReceived', 'FinalTotalDuplicates']
LOOKUP_VAL_VARS = ['FinalTotalLookups', 'FinalTotalSuccess', 'FinalTotalCacheHits', 'FinalTotalPending']
DELAY_VAL_VARS = ['FinalMinQueryDelay', 'FinalMaxQueryDelay', 'FinalAvgQueryDelay']

##############################
# Start setting up functions
##############################


@sem.utils.output_labels([
    'successRatio', 'finalResponse', 'finalPercentPending', 'finalPercentCache', 'finalPercentSuccess',
    'InitalTotalSaves', 'InitalTotalLookups', 'InitalTotalSuccess', 'InitalTotalFailed', 'InitalTotalLate', 'InitalTotalCacheHits', 'InitalTotalPending', 'InitalTotalStepUp', 'InitalTotalStepDowns', 'InitalTotalPowerloss', 'InitalTotalPowerRecharge', 'InitalMinQueryDelay', 'InitalMaxQueryDelay', 'InitalAvgQueryDelay', 'InitalTotalSent', 'InitalTotalExpectedRecipients', 'InitalTotalReceived', 'InitalTotalDuplicates', 'InitalTotalSentUNKOWN', 'InitalTotalSentPING', 'InitalTotalSentMODE_CHANGE', 'InitalTotalSentELECTION_REQUEST', 'InitalTotalSentSTORE', 'InitalTotalSentLOOKUP', 'InitalTotalSentLOOKUP_RESPONSE', 'InitalTotalSentTRANSFER', 'InitalTotalExpectedReceivesUNKOWN', 'InitalTotalExpectedReceivesPING', 'InitalTotalExpectedReceivesMODE_CHANGE', 'InitalTotalExpectedReceivesELECTION_REQUEST', 'InitalTotalExpectedReceivesSTORE', 'InitalTotalExpectedReceivesLOOKUP', 'InitalTotalExpectedReceivesLOOKUP_RESPONSE', 'InitalTotalExpectedReceivesTRANSFER', 'InitalTotalReceivedUNKOWN', 'InitalTotalReceivedPING', 'InitalTotalReceivedMODE_CHANGE', 'InitalTotalReceivedELECTION_REQUEST', 'InitalTotalReceivedSTORE', 'InitalTotalReceivedLOOKUP', 'InitalTotalReceivedLOOKUP_RESPONSE', 'InitalTotalReceivedTRANSFER',
    'FinalTotalSaves', 'FinalTotalLookups', 'FinalTotalSuccess', 'FinalTotalFailed', 'FinalTotalLate', 'FinalTotalCacheHits', 'FinalTotalPending', 'FinalTotalStepUp', 'FinalTotalStepDowns', 'FinalTotalPowerloss', 'FinalTotalPowerRecharge', 'FinalMinQueryDelay', 'FinalMaxQueryDelay', 'FinalAvgQueryDelay', 'FinalTotalSent', 'FinalTotalExpectedRecipients', 'FinalTotalReceived', 'FinalTotalDuplicates', 'FinalTotalSentUNKOWN', 'FinalTotalSentPING', 'FinalTotalSentMODE_CHANGE', 'FinalTotalSentELECTION_REQUEST', 'FinalTotalSentSTORE', 'FinalTotalSentLOOKUP', 'FinalTotalSentLOOKUP_RESPONSE', 'FinalTotalSentTRANSFER', 'FinalTotalExpectedReceivesUNKOWN', 'FinalTotalExpectedReceivesPING', 'FinalTotalExpectedReceivesMODE_CHANGE', 'FinalTotalExpectedReceivesELECTION_REQUEST', 'FinalTotalExpectedReceivesSTORE', 'FinalTotalExpectedReceivesLOOKUP', 'FinalTotalExpectedReceivesLOOKUP_RESPONSE', 'FinalTotalExpectedReceivesTRANSFER', 'FinalTotalReceivedUNKOWN', 'FinalTotalReceivedPING', 'FinalTotalReceivedMODE_CHANGE', 'FinalTotalReceivedELECTION_REQUEST', 'FinalTotalReceivedSTORE', 'FinalTotalReceivedLOOKUP', 'FinalTotalReceivedLOOKUP_RESPONSE', 'FinalTotalReceivedTRANSFER'
    ])
@sem.utils.only_load_some_files(['stdout'])
def get_all(result):
    if result['output']['stdout'] == "":
        return []
    lines = result['output']['stdout'].strip().split('\n')
    res = { r.split('\t')[0]: float(r.split('\t')[1]) for r in lines}
    successRatio = res['FinalTotalSuccess'] / (res['FinalTotalFailed'] + res['FinalTotalPending'])
    finalResponse = res['FinalTotalSuccess'] - res['FinalTotalCacheHits']

    finalPercentPending = res['FinalTotalPending'] / res['FinalTotalLookups'] * 100
    finalPercentCache = res['FinalTotalCacheHits'] / res['FinalTotalSuccess'] * 100
    finalPercentSuccess = res['FinalTotalSuccess'] / res['FinalTotalLookups'] * 100


    return [successRatio, finalResponse, finalPercentPending, finalPercentCache, finalPercentSuccess] + [float(r.split('\t')[1]) for r in lines]

def sendNotification(message):

    #os.system(f'notify-send "NS3 sims" "{message}"')

    if discord_url is not None:
        requests.post(discord_url, json={"content": message})

    print(message)


def getXTitle(x):
    xTitle = x
    if x == 'hops':
        xTitle == 'Total Number of Hops'
    elif x == 'carryingThreshold':
        xTitle = 'Carrying Threshold'
    elif x == 'forwardingThreshold':
        xTitle = 'Forwarding Threshold'
    elif x == 'totalNodes':
        xTitle = 'Total Number of Nodes'

    return xTitle

def createLinePlot(data, x, y, hue='staggeredStart', col='optionCarrierForwarding', row='optionalCheckBuffer', name=None):
    
    sns.set(rc={
        "xtick.bottom" : True, 
        "ytick.left" : True, 
        "ytick.minor.visible": True, 
        "xtick.direction": "in", 
        "ytick.direction": "in"
        })
    g = sns.catplot(data=data,
            x=x,
            y=y,
            hue=hue,
            col=col,
            row=row,
            kind='point',
            palette=["#E69F00", "#56B4E9", "#009E73", "#F0E442", "#0072B2", "#D55E00", "#CC79A7"],
            markers=['o', 'X', 'D', '^'],
            linestyles=['-', '--', ':', '-.']
            )

    # limit the success ratio plot between 0 and 1
    if y == 'successRatio':
        plt.ylim(0.0, 1.0)
       

    yTitle = y
    if y == 'successRatio':
        yTitle = 'Success Ratio'
    elif y == 'FinalTotalSent':
        yTitle = 'Total Number of Transmissions'
    elif name == 'carryingThreshold_networkCollisions_sample':
        yTitle = 'Number of Transmissions'
    elif y == 'value':
        yTitle = 'Query Delay (ms)'

    xTitle = getXTitle(x)
    
    if row != None and col != None:
        g.set_titles(template="{col_var}={col_name} and {row_var}={row_name}")
    elif row != None and col == None:
        g.set_titles(template="{row_var}={row_name}")
    elif row == None and col != None:
        g.set_titles(template="{col_var}={col_name}")
    
    g.set_axis_labels(xTitle, yTitle)



    name = f'{x}_{y}' if name is None else name

    plt.style.use('seaborn')
    plt.savefig(os.path.join(figure_dir, f'{name}.pdf'), metadata={'Author': 'Marshall Asch', 'Creator': 'ns3 RHPMAN Simulation Runner'})
    plt.clf()
    plt.close()

def createBarPlot(data, x, y, hue='variable', col='optionCarrierForwarding', row='optionalCheckBuffer', name=None, **kwargs):
    fig = sns.catplot(data=data,
            x=x,
            y=y,
            hue=hue,
            col=col,
            row=row,
            kind='bar',
            palette=["#E69F00", "#56B4E9", "#009E73", "#F0E442", "#0072B2", "#D55E00", "#CC79A7"],
            **kwargs
            )

    num_locations = len(data.get(x).unique())

    def hatch(ax, num):
        # Define some hatches
        hatches = itertools.cycle(['/', '\\', 'x', '-', '*', '//', '#', 'o', 'O', '.'])        # Loop over the bars
        for i,bar in enumerate(ax.patches):
            # Set a different hatch for each bar
            if i % num == 0:
                hatch = next(hatches)
            bar.set_hatch(hatch)

    for (k, v) in fig.axes_dict.items():
        hatch(v, num_locations)


    yTitle = y
    if y == 'successRatio':
        yTitle = 'Success Ratio'
    elif y == 'FinalTotalSent':
        yTitle = 'Total Number of Transmissions'
    elif y == 'value':
        yTitle = 'Number of Lookups'

    xTitle = getXTitle(x)

    if row != None and col != None:
        fig.set_titles(template="{col_var}={col_name} and {row_var}={row_name}")
    elif row != None and col == None:
        fig.set_titles(template="{row_var}={row_name}")
    elif row == None and col != None:
        fig.set_titles(template="{col_var}={col_name}")

    fig.set_axis_labels(xTitle, yTitle)

    name = f'{x}_{y}' if name is None else name

    plt.style.use('seaborn')
    plt.savefig(os.path.join(figure_dir, f'{name}.pdf'), metadata={'Author': 'Marshall Asch', 'Creator': 'ns3 RHPMAN Simulation Runner'})
    plt.clf()
    plt.close()

def createPlot(xName, yName, param):
    data = campaign.get_results_as_dataframe(get_all, params=param)
    data = data.dropna()

    createLinePlot(data, xName, yName)

def createDelayPlot(xName, param, fileSuffix):
    data = getMeltedData(param, DELAY_VAL_VARS)
    createLinePlot(data, xName, 'value', hue='variable', name=f'{xName}_queryDelay_{fileSuffix}')

def createLookupsPlot(xName, param, fileSuffix):
    data = getMeltedData(param, LOOKUP_VAL_VARS)
    createBarPlot(data, xName, 'value', hue='variable', name=f'{xName}_lookupResults_{fileSuffix}')

def createCollisionsPlot(xName, param, fileSuffix):
    data = getMeltedData(param, COLLISION_VALUE_VARS)
    createLinePlot(data, xName, 'value', hue='variable', name=f'{xName}_networkCollisions_{fileSuffix}')

def createPlotOptionalTransfer(xName, yName, param):
    data = campaign.get_results_as_dataframe(get_all, params=param)
    data = data.dropna()

    createLinePlot(data, xName, yName, hue='staggeredStart', col='optionalNoEmptyTransfers', row=None, name=f'{xName}_{yName}_optionalNoEmptyTransfers')

def createDelayPlotOptionalTransfer(xName, param):
    data = getMeltedData(param, DELAY_VAL_VARS)
    createLinePlot(data, xName, 'value', hue='variable', col='optionalNoEmptyTransfers', row='staggeredStart', name=f'{xName}_queryDelay_optionalNoEmptyTransfers')

def createCollisionsPlotOptionalTransfer(xName, param):
    data = getMeltedData(param, COLLISION_VALUE_VARS)
    createLinePlot(data, xName, 'value', hue='variable', col='optionalNoEmptyTransfers', row='staggeredStart', name=f'{xName}_networkCollisions_optionalNoEmptyTransfers')

def createLookupsPlotOptionalTransfer(xName, param):
    data = getMeltedData(param, LOOKUP_VAL_VARS)
    createBarPlot(data, xName, 'value', hue='variable', col='optionalNoEmptyTransfers', row='staggeredStart', name=f'{xName}_lookupResults_optionalNoEmptyTransfers')

def getMeltedData(param, value_vars):
    d1 = campaign.get_results_as_dataframe(get_all, params=param)
    d2 = d1.dropna()
    return pd.melt(d2, id_vars=ID_VARS, value_vars=value_vars)

def genFigs(xName, param):
    createPlot(xName, 'FinalTotalSent', param)
    createPlot(xName, 'successRatio', param)
    param['staggeredStart'] = [ True ]
    createDelayPlot(xName, param, 'staggered')
    createCollisionsPlot(xName, param, 'staggered')
    createLookupsPlot(xName, param, 'staggered')
    param['staggeredStart'] = [ False ]
    createDelayPlot(xName, param, 'notstaggered')
    createCollisionsPlot(xName, param, 'notstaggered')
    createLookupsPlot(xName, param, 'notstaggered')

    param['staggeredStart'] = [ True, False ]
    param['optionalNoEmptyTransfers'] = [ True, False ]
    param['optionCarrierForwarding'] = False
    param['optionalCheckBuffer'] = False
    createPlotOptionalTransfer(xName, 'FinalTotalSent', param)
    createPlotOptionalTransfer(xName, 'successRatio', param)
    createDelayPlotOptionalTransfer(xName, param)
    createCollisionsPlotOptionalTransfer(xName, param)
    createLookupsPlotOptionalTransfer(xName, param)

def getTimes(condition=lambda r: True):
    res = campaign.db.get_complete_results()
    times = [ r['meta']['elapsed_time'] for r in res if condition(r)]
    return {
        'total': timedelta(seconds=sum(times)),
        'min': timedelta(seconds=min(times)),
        'max': timedelta(seconds=max(times)),
        'avg': timedelta(seconds=np.mean(times))
    }

def getRuntimeInfo():
    times = getTimes()

    str = f"Running all Simulations took: avg={times['avg']}s\ttotal={times['total']}\tmin={times['min']}\tmax={times['max']}"

    times = getTimes(lambda r: r['meta']['exitcode'] == 0)
    return f"{str}\nRunning success Simulations took: avg={times['avg']}s\ttotal={times['total']}\tmin={times['min']}\tmax={times['max']}\n"

def countFailures():
    res = campaign.db.get_complete_results()
    failed = [ r for r in res if r['meta']['exitcode'] != 0 ]

    numFailed = len(failed)
    total = len(res)

    return f'There were {numFailed} simulations that crashed, this makes up {numFailed/total*100:.2f}% of the simulation runs'

def errorTypeCheck(run):
    if run['params']['totalNodes'] != 160:
        type = 'totalNodes'
    elif run['params']['hops'] != 2:
        type = 'Hops'
    elif run['params']['carryingThreshold'] != 0.4:
        type = 'carryingThreshold'
    elif run['params']['forwardingThreshold'] != 0.6:
        type = 'forwardingThreshold'
    else:
        type = 'generic'
    if run['params']['staggeredStart'] == True:
        type = f'{type}+staggeredStart'
    return type

def explainFailures():
    res = campaign.db.get_complete_results()
    errorReasons = [ errorTypeCheck(r) for r in res if r['meta']['exitcode'] != 0 ]
    errorReasons.sort()
    err = np.unique(errorReasons, return_counts=True)

    return f"{dict(zip(list(err[0]), err[1]))}"

def runSimulation():
    totalSims = len(sem.manager.list_param_combinations(param_combination)) * num_runs
    toRun = len(campaign.get_missing_simulations(sem.manager.list_param_combinations(param_combination), runs=num_runs))

    sendNotification(f'Starting simulations, {toRun} of {totalSims} simulations to run')
    campaign.run_missing_simulations(param_combination, runs=num_runs, stop_on_errors=False)
    sendNotification("Simulations have finished running")

    ## print some of the information about the run
    sendNotification(countFailures())
    sendNotification(getRuntimeInfo())
    sendNotification(explainFailures())

def genPlots():
    ## Generate all the figures

    sendNotification("Starting producing plots")

    ## Generate sample plots
    tmp = copy.deepcopy(hops_params)
    tmp['optionCarrierForwarding'] = False
    tmp['optionalCheckBuffer'] = False
    tmp['optionalNoEmptyTransfers'] = False
    data = campaign.get_results_as_dataframe(get_all, params=tmp)
    data = data.dropna()

    createLinePlot(data, 'hops', 'FinalTotalSent', hue='staggeredStart', col=None, row=None, name='hops_FinalTotalSent_sample')

    # Generate full plots
    genFigs('hops', hops_params)
    genFigs('totalNodes', totalnodes_params)
    genFigs('carryingThreshold', carrying_params)
    genFigs('forwardingThreshold', forwarding_params)

    sendNotification("All the plots have been produced")

def collisionsSample():
    tmp = copy.deepcopy(carrying_params)
    tmp['optionCarrierForwarding'] = False
    tmp['optionalCheckBuffer'] = False
    tmp['optionalNoEmptyTransfers'] = False
    d1 = campaign.get_results_as_dataframe(get_all, params=tmp)
    d1 = d1.dropna()
    d2 = pd.melt(d1, id_vars=ID_VARS, value_vars=COLLISION_VALUE_VARS)

    createLinePlot(d2, 'carryingThreshold', 'value', hue='variable', col='staggeredStart', row=None, name='carryingThreshold_networkCollisions_sample')

    # Calculate the percent of messages that have been lost

    data = d1.groupby(['staggeredStart'])
    means = data.mean()
    error = data.sem()*1.96

    change1, uncertainty1 = percent_change(means.get('FinalTotalSent').values[0],means.get('FinalTotalReceived').values[0], error.get('FinalTotalReceived').values[0], error.get('FinalTotalSent').values[0])
    change2, uncertainty2 = percent_change(means.get('FinalTotalSent').values[1],means.get('FinalTotalReceived').values[1], error.get('FinalTotalReceived').values[1], error.get('FinalTotalSent').values[1])

    print(f'percent loss when disabled: {change1:.3f} \pm {uncertainty1:.3f}')
    print(f'percent loss when enabled: {change2:.3f} \pm {uncertainty2:.3f}')

def percent_change(a, b, ea, eb):
    """
    Calculating percent loss = (b - a) / a
    """
    v = (b - a)

    u = np.sqrt(ea ** 2 +  eb **2)

    # calculated using https://www.calculatorsoup.com/calculators/algebra/percent-change-calculator.php
    percentChange = v / abs(a) * 100

    # error calculated using https://www.statisticshowto.com/error-propagation/
    error = percentChange * np.sqrt((u / v) ** 2 + (ea / a ) ** 2) * 100

    return percentChange, error

def createLookupsPlotSample(xName, param, fileSuffix):

    tmp = copy.deepcopy(param)
    tmp['staggeredStart'] = True
    tmp['optionCarrierForwarding'] = False
    tmp['optionalCheckBuffer'] = [True, False]
    tmp['optionalNoEmptyTransfers'] = False

    data = getMeltedData(tmp, ['FinalTotalLookups', 'FinalTotalSuccess', 'FinalTotalCacheHits', 'finalResponse'])
    createBarPlot(data, xName, 'value', hue='optionalCheckBuffer', col='variable', row=None, name=f'{xName}_lookupResults_{fileSuffix}', col_wrap=2)

def carryingTrafficSample():

    tmp = copy.deepcopy(carrying_params)
    tmp['staggeredStart'] = True
    tmp['optionCarrierForwarding'] = [True, False]
    tmp['optionalCheckBuffer'] = False
    tmp['optionalNoEmptyTransfers'] = False

    data = campaign.get_results_as_dataframe(get_all, params=tmp)
    data = data.dropna()

    createLinePlot(data, 'carryingThreshold', 'FinalTotalSent', hue='optionCarrierForwarding', col=None, row=None, name='carryingThreshold_traffic_sample')

def percentChange(metric, data):
    means = data.mean().get(metric)
    error = data.sem().get(metric)*1.96

    #only calculate if there are 2 values
    if len(means.values) != 2:
        return

    change, uncertainty = percent_change(means.values[0], means.values[1], error.values[0], error.values[1])

    print(f'percent change: {change:.3f} \pm {uncertainty:.3f}')

def values(metric, data):
    means = data.mean().get(metric)
    error = data.sem().get(metric)*1.96

    print(f'{metric} +- Margin of error')
    for k,m,e in zip(means.keys().values, means.values, error.values):
        print(f'{k}: {m:.3f} \pm {e:.3f}')

def calculateValues(params, type):

    param = copy.deepcopy(params)
    param['staggeredStart'] = True
    param['optionCarrierForwarding'] = False
    param['optionalCheckBuffer'] = False
    param['optionalNoEmptyTransfers'] = False

    if type == 'staggeredStart' or type == 'optionCarrierForwarding' or type == 'optionalCheckBuffer' or type == 'optionalNoEmptyTransfers':
        param[type] = [True, False]

    data = campaign.get_results_as_dataframe(get_all, params=param).dropna()
    data = data.groupby([type])

    seperator('=')
    print(f'---- {type} -----')
    seperator('=')

    print(f'\n+++ successRatio +++ ')
    values('successRatio', data)
    percentChange('successRatio', data)

    print(f'\n+++ totalSent +++ ')
    values('FinalTotalSent', data)
    percentChange('FinalTotalSent', data)

    print(f'\n+++ finalPercentPending +++ ')
    values('finalPercentPending', data)

    print(f'\n+++ finalPercentCache +++ ')
    values('finalPercentCache', data)

    print(f'\n+++ FinalMinQueryDelay +++ ')
    values('FinalMinQueryDelay', data)

    print(f'\n+++ FinalMaxQueryDelay +++ ')
    values('FinalMaxQueryDelay', data)

    print(f'\n+++ FinalAvgQueryDelay +++ ')
    values('FinalAvgQueryDelay', data)

    print(f'\n+++ finalPercentSuccess +++ ')
    values('finalPercentSuccess', data)

def calcValues(type=None, params=None):

    if params is None:
        return

    start = time.time()

    seperator('*')
    print(f'---- {type} -----')
    seperator('*')

    calculateValues(params, 'staggeredStart')
    calculateValues(params, 'optionCarrierForwarding')
    calculateValues(params, 'optionalCheckBuffer')
    calculateValues(params, 'optionalNoEmptyTransfers')

    end = time.time()
    print(f'values generated in: {timedelta(seconds=end - start)}')

def seperator(char, newlines=0):
    print(char * 32 + '\n' * newlines)

def calculateAllValues():

    seperator('=')
    seperator('=')
    print('The value at each point in the optional dissabled plots, staggered on')
    seperator('=')
    seperator('=')

    start = time.time()

    calcValues(type='hops', params=hops_params)
    seperator('=', 2)

    calcValues(type='totalNodes', params=totalnodes_params)
    seperator('=', 2)

    calcValues(type='carryingThreshold', params=carrying_params)
    seperator('=', 2)

    calcValues(type='forwardingThreshold', params=forwarding_params)

    end = time.time()
    print(f'values generated in: {timedelta(seconds=end - start)}')

##############################
#     Run the simulations
##############################

def tmp(params, type, metric):
    param = copy.deepcopy(params)
    param['staggeredStart'] = True
    param['optionCarrierForwarding'] = False
    param['optionalCheckBuffer'] = False
    param['optionalNoEmptyTransfers'] = False


    data = campaign.get_results_as_dataframe(get_all, params=param)
    data = data.dropna().groupby([type])

    values(metric, data)

def tmp2(params, type):
    print(f'---- {type} - success ratio -----')
    tmp(params, type, 'successRatio')
    print(f'---- {type} - total sent -----')
    tmp(params, type, 'FinalTotalSent')

    seperator('>>')
    seperator('>>')

def genAllBaseValues():
    tmp2(hops_params, 'hops')
    tmp2(totalnodes_params, 'totalNodes')
    tmp2(carrying_params, 'carryingThreshold')
    tmp2(forwarding_params, 'forwardingThreshold')

def highest(params, type, metric):
    param = copy.deepcopy(params)
    param['staggeredStart'] = True
    param['optionCarrierForwarding'] = True
    param['optionalCheckBuffer'] = True
    param['optionalNoEmptyTransfers'] = False

    data = campaign.get_results_as_dataframe(get_all, params=param)
    data = data.dropna().groupby([type])

    values(metric, data)

def lowest(params, type, metric):
    param = copy.deepcopy(params)
    param['staggeredStart'] = False
    param['optionCarrierForwarding'] = False
    param['optionalCheckBuffer'] = False
    param['optionalNoEmptyTransfers'] = False

    data = campaign.get_results_as_dataframe(get_all, params=param)
    data = data.dropna().groupby([type])

    values(metric, data)


def defence_hops_success():
    tmp = copy.deepcopy(hops_params)
    tmp['optionCarrierForwarding'] = False
    tmp['optionalCheckBuffer'] = False
    tmp['optionalNoEmptyTransfers'] = False
    tmp['staggeredStart'] = True
    data = campaign.get_results_as_dataframe(get_all, params=tmp)
    data = data.dropna()

    sns.lineplot(data=data,
            x='hops',
            y='successRatio',
            markers=True,
            dashes=False,
            # style='event',
            # kind='point',
            palette=["#E69F00", "#56B4E9", "#009E73", "#F0E442", "#0072B2", "#D55E00", "#CC79A7"]
            # markers=['o', 'X', 'D', '^'],
            # linestyles=['-', '--', ':', '-.'],
            ).set(title="Success Ratio vs. Hops with Staggered Start and all Options Dissabled")

    # limit the success ratio plot between 0 and 1
    plt.ylim(0.0, 1.0)

    name = f'hops_success_defence'

    # plt.style.use('seaborn')
    plt.savefig(os.path.join(figure_dir, f'{name}.pdf'))
    plt.clf()
    plt.close()


def nodes_loss_calculation():

    tmp = copy.deepcopy(totalnodes_params)
    tmp['optionCarrierForwarding'] = False
    tmp['optionalCheckBuffer'] = False
    tmp['optionalNoEmptyTransfers'] = False
    tmp['staggeredStart'] = True
    d1 = campaign.get_results_as_dataframe(get_all, params=tmp)
    d1 = d1.dropna()

    data = d1.groupby(['totalNodes'])

    means = data.mean()
    error = data.sem()*1.96

    change1, uncertainty1 = percent_change(means.get('FinalTotalSent').values[0],means.get('FinalTotalReceived').values[0], error.get('FinalTotalReceived').values[0], error.get('FinalTotalSent').values[0])
    change2, uncertainty2 = percent_change(means.get('FinalTotalSent').values[1],means.get('FinalTotalReceived').values[1], error.get('FinalTotalReceived').values[1], error.get('FinalTotalSent').values[1])

    print(f'percent loss when nodes={means.index[0]}: {change1:.3f} \pm {uncertainty1:.3f}')
    print(f'percent loss when nodes={means.index[1]}: {change2:.3f} \pm {uncertainty2:.3f}')

if __name__ == "__main__":
    campaign_dir = os.path.join(results_path, experimentName)
    figure_dir = os.path.join(results_path, f'{experimentName}_figures')

    if not os.path.exists(figure_dir):
        os.makedirs(figure_dir)

    campaign = sem.CampaignManager.new(ns_path, script, campaign_dir, check_repo=False, optimized=optimized, max_parallel_processes=numThreads)

    defence_hops_success()

    runSimulation()

    start = time.time()
    genPlots()
    createLookupsPlotSample('carryingThreshold', carrying_params, 'sample')
    carryingTrafficSample()
    collisionsSample()
    end = time.time()
    print(f'Figures generated in: {timedelta(seconds=end - start)}')

    calculateAllValues()


    print('\nGenerate all the values to go with the graphs')
    genAllBaseValues()

    print('\nhops success ratio highest values')
    highest(hops_params, 'hops', 'successRatio')

    print('\nTotalNodes success ratio highest values')
    highest(totalnodes_params, 'totalNodes', 'successRatio')

    print('\nTotalNodes success ratio lowest values')
    lowest(totalnodes_params, 'totalNodes', 'successRatio')

    print('\nTotalNodes loss valuses')
    nodes_loss_calculation()
