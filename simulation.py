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


num_runs = 30
experimentName = 'rhpman_v5'

ns_path = '../allinone2/ns-3.32'
script = 'rhpman-example'
discord_url = os.environ.get('DISCORD_URL')


campaign_dir = os.path.join(os.getcwd(), experimentName)
figure_dir = os.path.join(os.getcwd(), f'{experimentName}_figures')


if not os.path.exists(figure_dir):
    os.makedirs(figure_dir)


campaign = sem.CampaignManager.new(ns_path, script, campaign_dir, max_parallel_processes=14)


def sendNotification(message):

    os.system(f'notify-send "NS3 sims" "{message}"')

    if discord_url is not None:
        requests.post(discord_url, json={"content": message})

    print(message)

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

# change the params for the optional no empty transfers
optional_no_empty_params = copy.deepcopy(param_combination)
optional_no_empty_params['totalNodes'] = 160
optional_no_empty_params['carryingThreshold'] = 0.4
optional_no_empty_params['forwardingThreshold'] = 0.6
optional_no_empty_params['hops'] = 2
optional_no_empty_params['staggeredStart'] = True
optional_no_empty_params['optionCarrierForwarding'] = False
optional_no_empty_params['optionalCheckBuffer'] = False


@sem.utils.output_labels([
    'successRatio',
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
    return [successRatio] + [float(r.split('\t')[1]) for r in lines]


def createPlot(xName, yName, param):
    data = campaign.get_results_as_dataframe(get_all, params=param)
    data = data.dropna()
    sns.catplot(data=data,
                x=xName,
                y=yName,
                hue='staggeredStart',
                col='optionCarrierForwarding',
                row='optionalCheckBuffer',
                kind='point'
                )
    plt.savefig(os.path.join(figure_dir, f'{xName}_{yName}.pdf'))
    plt.clf()
    plt.close()


def createDelayPlot(xName, param, fileSuffix):
    d1 = campaign.get_results_as_dataframe(get_all, params=param)
    d1 = d1.dropna()
    d2=pd.melt(d1, id_vars=[xName, 'staggeredStart', 'optionCarrierForwarding', 'optionalCheckBuffer'], value_vars=['FinalMinQueryDelay', 'FinalMaxQueryDelay', 'FinalAvgQueryDelay'])
    sns.catplot(data=d2,
            x=xName,
            y='value',
            hue='variable',
            #col='staggeredStart',
            col='optionCarrierForwarding',
            row='optionalCheckBuffer',
            kind='point'
            )
    plt.savefig(os.path.join(figure_dir, f'{xName}_queryDelay_{fileSuffix}.pdf'))
    plt.clf()
    plt.close()

def getTimes(condition=lambda r: True):
    res = campaign.db.get_complete_results()
    times = [ r['meta']['elapsed_time'] for r in res if condition(r)]
    return {
        'total': sum(times),
        'min': min(times),
        'max': max(times),
        'avg': np.mean(times)
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
    return f"{errorReasons}"

#################
#
#   Run the simulations
#
#################


totalSims = len(sem.manager.list_param_combinations(param_combination)) * num_runs
toRun = len(campaign.get_missing_simulations(sem.manager.list_param_combinations(param_combination), runs=num_runs))
sendNotification(f'Starting simulations, {toRun} of {totalSims} simulations to run')

campaign.run_missing_simulations(param_combination, runs=num_runs, stop_on_errors=False)

sendNotification("Simulations have finished running")
sendNotification(countFailures())


## print some of the information about the run
sendNotification(getRuntimeInfo())
sendNotification(explainFailures())


## Generate all the figures
createPlot('hops', 'FinalTotalSent', hops_params)
createPlot('hops', 'successRatio', hops_params)
hops_params['staggeredStart'] = [ True ]
createDelayPlot('hops', hops_params, 'staggered')
hops_params['staggeredStart'] = [ False ]
createDelayPlot('hops', hops_params, 'notstaggered')

createPlot('totalNodes', 'FinalTotalSent', totalnodes_params)
createPlot('totalNodes', 'successRatio', totalnodes_params)
totalnodes_params['staggeredStart'] = [ True ]
createDelayPlot('totalNodes', totalnodes_params, 'staggered')
totalnodes_params['staggeredStart'] = [ False ]
createDelayPlot('totalNodes', totalnodes_params, 'notstaggered')

createPlot('carryingThreshold', 'FinalTotalSent', carrying_params)
createPlot('carryingThreshold', 'successRatio', carrying_params)
carrying_params['staggeredStart'] = [ True ]
createDelayPlot('carryingThreshold', carrying_params, 'staggerd')
carrying_params['staggeredStart'] = [ False ]
createDelayPlot('carryingThreshold', carrying_params, 'notstaggerd')

createPlot('forwardingThreshold', 'FinalTotalSent', forwarding_params)
createPlot('forwardingThreshold', 'successRatio', forwarding_params)
forwarding_params['staggeredStart'] = [ True ]
createDelayPlot('forwardingThreshold', forwarding_params, 'staggered')
forwarding_params['staggeredStart'] = [ False ]
createDelayPlot('forwardingThreshold', forwarding_params, 'notstaggered')

createPlot('optionalNoEmptyTransfers', 'FinalTotalSent', optional_no_empty_params)
createPlot('optionalNoEmptyTransfers', 'successRatio', optional_no_empty_params)
optional_no_empty_params['staggeredStart'] = [ True ]
createDelayPlot('optionalNoEmptyTransfers', optional_no_empty_params, 'staggered')
optional_no_empty_params['staggeredStart'] = [ False ]
createDelayPlot('optionalNoEmptyTransfers', optional_no_empty_params, 'notstaggered')


sendNotification("All the plots have been produced")
