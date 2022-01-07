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
experimentName = 'rhpman_v6'

ns_path = '../allinone2/ns-3.32'
script = 'rhpman-example'
discord_url = os.environ.get('DISCORD_URL')


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

def createPlot(xName, yName, param):
    data = campaign.get_results_as_dataframe(get_all, params=param)
    data = data.dropna()
    sns.catplot(data=data,
                x=xName,
                y=yName,
                hue='staggeredStart',
                col='optionCarrierForwarding',
                row='optionalCheckBuffer',
                kind='point',
                markers=['o', 'X', 'D', '^'],
                linestyles=['-', '--', ':', '-.']
                )

    # limit the success ratio plot between 0 and 1
    if yName == 'successRatio':
        plt.ylim(0.0, 1.0)

    plt.style.use('seaborn')
    plt.savefig(os.path.join(figure_dir, f'{xName}_{yName}.pdf'))
    plt.clf()
    plt.close()

def createDelayPlot(xName, param, fileSuffix):
    d1 = campaign.get_results_as_dataframe(get_all, params=param)
    d1 = d1.dropna()
    d2=pd.melt(d1, id_vars=[xName, 'staggeredStart', 'optionCarrierForwarding', 'optionalCheckBuffer'], value_vars=['FinalMinQueryDelay', 'FinalMaxQueryDelay', 'FinalAvgQueryDelay'])
    d3=pd.melt(d1, id_vars=[xName, 'staggeredStart', 'optionCarrierForwarding', 'optionalCheckBuffer'], value_vars=['FinalTotalLookups', 'FinalTotalSuccess', 'FinalTotalFailed', 'FinalTotalLate', 'FinalTotalCacheHits', 'FinalTotalPending'])
    sns.catplot(data=d2,
            x=xName,
            y='value',
            hue='variable',
            #col='staggeredStart',
            col='optionCarrierForwarding',
            row='optionalCheckBuffer',
            kind='point',
            markers=['o', 'X', 'D', '^'],
            linestyles=['-', '--', ':', '-.']
            )

    ax = plt.gca()
    ax2 = ax.twinx()
    sns.barplot(data=d3, x=xName, y='value', hue='variable', ax=ax2)

    plt.style.use('seaborn')
    plt.savefig(os.path.join(figure_dir, f'{xName}_queryDelay_{fileSuffix}.pdf'))
    plt.clf()
    plt.close()

def createLookupsPlot(xName, param, fileSuffix):
    d1 = campaign.get_results_as_dataframe(get_all, params=param)
    d1 = d1.dropna()
    d2=pd.melt(d1, id_vars=[xName, 'staggeredStart', 'optionCarrierForwarding', 'optionalCheckBuffer', 'optionalNoEmptyTransfers'], value_vars=['FinalTotalLookups', 'FinalTotalSuccess', 'FinalTotalCacheHits', 'FinalTotalPending'])
    sns.catplot(data=d2,
            x=xName,
            y='value',
            hue='variable',
            col='optionCarrierForwarding',
            row='optionalCheckBuffer',
            kind='bar'
            )
    plt.style.use('seaborn')
    plt.savefig(os.path.join(figure_dir, f'{xName}_lookupResults_{fileSuffix}.pdf'))
    plt.clf()
    plt.close()

def createCollisionsPlot(xName, param, fileSuffix):
    d1 = campaign.get_results_as_dataframe(get_all, params=param)
    d1 = d1.dropna()
    d2=pd.melt(d1, id_vars=[xName, 'staggeredStart', 'optionCarrierForwarding', 'optionalCheckBuffer', 'optionalNoEmptyTransfers'], value_vars=['FinalTotalSent', 'FinalTotalReceived', 'FinalTotalDuplicates'])
    sns.catplot(data=d2,
            x=xName,
            y='value',
            hue='variable',
            col='optionCarrierForwarding',
            row='optionalCheckBuffer',
            kind='point',
            markers=['o', 'X', 'D', '^'],
            linestyles=['-', '--', ':', '-.']
            )
    plt.style.use('seaborn')
    plt.savefig(os.path.join(figure_dir, f'{xName}_networkCollisions_{fileSuffix}.pdf'))
    plt.clf()
    plt.close()

def createPlotOptionalTransfer(xName, yName, param):
    data = campaign.get_results_as_dataframe(get_all, params=param)
    data = data.dropna()
    sns.catplot(data=data,
                x=xName,
                y=yName,
                hue='staggeredStart',
                col='optionalNoEmptyTransfers',
                kind='point',
                markers=['o', 'X', 'D', '^'],
                linestyles=['-', '--', ':', '-.']
                )

    if yName == 'successRatio':
        plt.ylim(0.0, 1.0)

    plt.style.use('seaborn')
    plt.savefig(os.path.join(figure_dir, f'{xName}_{yName}_optionalNoEmptyTransfers.pdf'))
    plt.clf()
    plt.close()

def createDelayPlotOptionalTransfer(xName, param):
    d1 = campaign.get_results_as_dataframe(get_all, params=param)
    d1 = d1.dropna()
    d2=pd.melt(d1, id_vars=[xName, 'staggeredStart', 'optionCarrierForwarding', 'optionalCheckBuffer', 'optionalNoEmptyTransfers'], value_vars=['FinalMinQueryDelay', 'FinalMaxQueryDelay', 'FinalAvgQueryDelay'])
    sns.catplot(data=d2,
            x=xName,
            y='value',
            hue='variable',
            col='optionalNoEmptyTransfers',
            row='staggeredStart',
            kind='point',
            markers=['o', 'X', 'D', '^'],
            linestyles=['-', '--', ':', '-.']
            )
    plt.style.use('seaborn')
    plt.savefig(os.path.join(figure_dir, f'{xName}_queryDelay_optionalNoEmptyTransfers.pdf'))
    plt.clf()
    plt.close()

def createCollisionsPlotOptionalTransfer(xName, param):
    d1 = campaign.get_results_as_dataframe(get_all, params=param)
    d1 = d1.dropna()
    d2=pd.melt(d1, id_vars=[xName, 'staggeredStart', 'optionCarrierForwarding', 'optionalCheckBuffer', 'optionalNoEmptyTransfers'], value_vars=['FinalTotalSent', 'FinalTotalReceived', 'FinalTotalDuplicates'])
    sns.catplot(data=d2,
            x=xName,
            y='value',
            hue='variable',
            col='optionalNoEmptyTransfers',
            row='staggeredStart',
            kind='point',
            markers=['o', 'X', 'D', '^'],
            linestyles=['-', '--', ':', '-.']
            )
    plt.style.use('seaborn')
    plt.savefig(os.path.join(figure_dir, f'{xName}_networkCollisions_optionalNoEmptyTransfers.pdf'))
    plt.clf()
    plt.close()

def createLookupsPlotOptionalTransfer(xName, param):
    d1 = campaign.get_results_as_dataframe(get_all, params=param)
    d1 = d1.dropna()
    d2=pd.melt(d1, id_vars=[xName, 'staggeredStart', 'optionCarrierForwarding', 'optionalCheckBuffer', 'optionalNoEmptyTransfers'], value_vars=['FinalTotalLookups', 'FinalTotalSuccess', 'FinalTotalCacheHits', 'FinalTotalPending'])
    sns.catplot(data=d2,
            x=xName,
            y='value',
            hue='variable',
            col='optionalNoEmptyTransfers',
            row='staggeredStart',
            kind='bar'
            )
    plt.style.use('seaborn')
    plt.savefig(os.path.join(figure_dir, f'{xName}_lookupResults_optionalNoEmptyTransfers.pdf'))
    plt.clf()
    plt.close()

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
    sendNotification(countFailures())


    ## print some of the information about the run
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
    sns.catplot(data=data,
                x='hops',
                y='FinalTotalSent',
                hue='staggeredStart',
                kind='point',
                markers=['o', 'X', 'D', '^'],
                linestyles=['-', '--', ':', '-.']
                )
    plt.style.use('seaborn')
    plt.savefig(os.path.join(figure_dir, 'hops_FinalTotalSent_sample.pdf'))
    plt.clf()
    plt.close()

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
    d2 = pd.melt(d1, id_vars=['carryingThreshold', 'staggeredStart', 'optionCarrierForwarding', 'optionalCheckBuffer', 'optionalNoEmptyTransfers'], value_vars=['FinalTotalSent', 'FinalTotalReceived'])
    sns.catplot(data=d2,
            x='carryingThreshold',
            y='value',
            hue='variable',
            col='staggeredStart',
            kind='point',
            markers=['o', 'X', 'D', '^'],
            linestyles=['-', '--', ':', '-.']
            )
    plt.style.use('seaborn')
    plt.savefig(os.path.join(figure_dir, f'carryingThreshold_networkCollisions_sample.pdf'))
    plt.clf()
    plt.close()

    # Calculate the percent of messages that have been lost

    data = d1.groupby(['staggeredStart'])
    means = data.mean()
    error = data.sem()*1.96

    lost1 = (means.get('FinalTotalSent').values[0] - means.get('FinalTotalReceived').values[0])
    lost2 = (means.get('FinalTotalSent').values[1] - means.get('FinalTotalReceived').values[1])

    u1 = np.sqrt(error.get('FinalTotalReceived').values[0]**2 + error.get('FinalTotalSent').values[0]**2)
    u2 = np.sqrt(error.get('FinalTotalReceived').values[1]**2 + error.get('FinalTotalSent').values[1]**2)

    percentLost1 = lost1 /  means.get('FinalTotalSent').values[0] *100
    percentLost2 = lost2 /  means.get('FinalTotalSent').values[1]*100

    # error calculated using https://www.statisticshowto.com/error-propagation/
    u3 = np.sqrt((u1/lost1)**2 + (error.get('FinalTotalSent').values[0]/means.get('FinalTotalSent').values[0])**2)
    u4 = np.sqrt((u2/lost2)**2 + (error.get('FinalTotalSent').values[1]/means.get('FinalTotalSent').values[1])**2)

    print(f'percent loss when disabled: {percentLost1:.3f} \pm {u3*100:.3f}')
    print(f'percent loss when enabled: {percentLost2:.3f} \pm {u4*100:.3f}')

def createLookupsPlotSample(xName, param, fileSuffix):

    param = copy.deepcopy(param)
    param['staggeredStart'] = True
    param['optionCarrierForwarding'] = False
    param['optionalCheckBuffer'] = [True, False]
    param['optionalNoEmptyTransfers'] = False

    d1 = campaign.get_results_as_dataframe(get_all, params=param)
    d1 = d1.dropna()
    d2 = pd.melt(d1, id_vars=[xName, 'staggeredStart', 'optionCarrierForwarding', 'optionalCheckBuffer', 'optionalNoEmptyTransfers'], value_vars=['FinalTotalLookups', 'FinalTotalSuccess', 'FinalTotalCacheHits', 'finalResponse'])
    fig = sns.catplot(data=d2,
            x=xName,
            y='value',
            hue='optionalCheckBuffer',
            col='variable',
            col_wrap=2,
            kind='bar'
            )
    plt.style.use('seaborn')


    num_locations = len(d2.get(xName).unique())
    def hatch(ax, num):
        # Define some hatches
        hatches = itertools.cycle(['/', '\\', '+', '-', 'x', '//', '*', 'o', 'O', '.'])        # Loop over the bars
        for i,bar in enumerate(ax.patches):
            # Set a different hatch for each bar
            if i % num == 0:
                hatch = next(hatches)
            bar.set_hatch(hatch)

    for (k, v) in fig.axes_dict.items():
        hatch(v, num_locations)

    plt.savefig(os.path.join(figure_dir, f'{xName}_lookupResults_{fileSuffix}.pdf'))
    plt.clf()
    plt.close()

def carryingTrafficSample():

    tmp = copy.deepcopy(carrying_params)
    tmp['staggeredStart'] = True
    tmp['optionCarrierForwarding'] = [True, False]
    tmp['optionalCheckBuffer'] = False
    tmp['optionalNoEmptyTransfers'] = False

    data = campaign.get_results_as_dataframe(get_all, params=tmp)
    data = data.dropna()
    sns.catplot(data=data,
                x='carryingThreshold',
                y='FinalTotalSent',
                hue='optionCarrierForwarding',
                # col='optionCarrierForwarding',
                # row='optionalCheckBuffer',
                kind='point',
                markers=['o', 'X', 'D', '^'],
                linestyles=['-', '--', ':', '-.']
                )

    plt.style.use('seaborn')
    plt.savefig(os.path.join(figure_dir, f'carryingThreshold_traffic_sample.pdf'))
    plt.clf()
    plt.close()



def percentChange(metric, data):
    means = data.mean().get(metric)
    error = data.sem().get(metric)*1.96

    #only calculate if there are 2 values
    if len(means.values) != 2:
        return

    v1 = means.values[0]
    v2 = means.values[1]
    u1 = error.values[0]
    u2 = error.values[1]

    # calculated using https://www.calculatorsoup.com/calculators/algebra/percent-change-calculator.php
    v3 = v2-v1
    change = v3 / v1 * 100

    # error calculated using https://www.statisticshowto.com/error-propagation/
    u3 = np.sqrt(u1**2 + u2**2)
    u4 = np.sqrt((u3/v3)**2 + (u1/v1)**2)

    print(f'percent change: {change:.3f} \pm {u4*100:.3f}')

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

    print('\n\n=============================')
    print(f'---- {type} -----')
    print('=============================')


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

    print('\n\n***************************')
    print(f'---- {type} -----')
    print('***************************')


    calculateValues(params, 'staggeredStart')
    calculateValues(params, 'optionCarrierForwarding')
    calculateValues(params, 'optionalCheckBuffer')
    calculateValues(params, 'optionalNoEmptyTransfers')

    end = time.time()
    print(f'values generated in: {timedelta(seconds=end - start)}')

def calculateAllValues():

    print('\n=============================')
    print('=============================')
    print('The value at each point in the optional dissabled plots, staggered on')
    print('=============================')
    print('=============================\n')
    start = time.time()

    calcValues(type='hops', params=hops_params)
    print('\n\n=============================')

    calcValues(type='totalNodes', params=totalnodes_params)
    print('\n\n=============================')

    calcValues(type='carryingThreshold', params=carrying_params)
    print('\n\n=============================')

    calcValues(type='forwardingThreshold', params=forwarding_params)

    end = time.time()
    print(f'values generated in: {timedelta(seconds=end - start)}')

##############################
#     Run the simulations
##############################

if __name__ == "__main__":
    campaign_dir = os.path.join(os.getcwd(), experimentName)
    figure_dir = os.path.join(os.getcwd(), f'{experimentName}_figures')

    if not os.path.exists(figure_dir):
        os.makedirs(figure_dir)


    campaign = sem.CampaignManager.new(ns_path, script, campaign_dir, max_parallel_processes=14)
    #campaign = sem.CampaignManager.load(campaign_dir, ns_path=ns_path, check_repo=False, max_parallel_processes=14, skip_configuration=True)

    runSimulation()

    start = time.time()
    genPlots()
    createLookupsPlotSample('carryingThreshold', carrying_params, 'sample')
    carryingTrafficSample()
    collisionsSample()
    end = time.time()
    print(f'Figures generated in: {timedelta(seconds=end - start)}')

    calculateAllValues()
