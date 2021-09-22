#!/usr/bin/env python3


#
# This was run using commit cf4e71d
#
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
import os


experimentName = 'rhpman_v3'
ns_path = '../allinone2/ns-3.32'
script = 'rhpman-example'


campaign_dir = os.path.join(os.getcwd(), experimentName)
figure_dir = os.path.join(os.getcwd(), experimentName, 'figures')


if not os.path.exists(figure_dir):
    os.makedirs(figure_dir)


campaign = sem.CampaignManager.new(ns_path, script, campaign_dir, max_parallel_processes=13)



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
    'storageSpace': lambda p: p['totalNodes'], # [40], #getNumNodes,
    'bufferSpace': lambda p: p['totalNodes'], # [40], #getNumNodes,

    'wcdc': [0.5],
    'wcol': [0.5],

    'hops': lambda p: [2] if p['totalNodes'] != 160 else [1, 2, 3, 4, 5], # [2]
    'replicationHops': [4],

    'carryingThreshold': getCarryingThreshold, # lambda p: [0.0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1.0], # [0.4], #
    'forwardingThreshold': getForwardingThreshold,  #[0.0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1.0], # [0.6], #

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
    'staggeredStart': [True, False],
    'lowPowerThreshold': [0.4]
}

carrying_params = {
    'runTime': [2400],
    'waitTime': [600],
    'lookupTime': [30],
    'updateTime': [120],
    'dataSize': [512],
    'profileUpdateDelay': [6],

    'totalNodes': [160],
    'storageSpace': lambda p: p['totalNodes'], # [40], #getNumNodes,
    'bufferSpace': lambda p: p['totalNodes'], # [40], #getNumNodes,

    'wcdc': [0.5],
    'wcol': [0.5],

    'hops': [2],
    'replicationHops': [4],

    'carryingThreshold': [0.0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1.0], # [0.4], #
    'forwardingThreshold': [0.6],

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
    'staggeredStart': [True, False],
    'lowPowerThreshold': [0.4]
}

forwarding_params = {
    'runTime': [2400],
    'waitTime': [600],
    'lookupTime': [30],
    'updateTime': [120],
    'dataSize': [512],
    'profileUpdateDelay': [6],

    'totalNodes': [160],
    'storageSpace': lambda p: p['totalNodes'], # [40], #getNumNodes,
    'bufferSpace': lambda p: p['totalNodes'], # [40], #getNumNodes,

    'wcdc': [0.5],
    'wcol': [0.5],

    'hops': [2],
    'replicationHops': [4],

    'carryingThreshold': [0.4], #
    'forwardingThreshold': [0.0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1.0],

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
    'staggeredStart': [True, False],
    'lowPowerThreshold': [0.4],
}

totalnodes_params = {
    'runTime': [2400],
    'waitTime': [600],
    'lookupTime': [30],
    'updateTime': [120],
    'dataSize': [512],
    'profileUpdateDelay': [6],

    'totalNodes': [160, 200], #[40, 80, 120, 160, 200],
    'storageSpace': lambda p: p['totalNodes'], # [40], #getNumNodes,
    'bufferSpace': lambda p: p['totalNodes'], # [40], #getNumNodes,

    'wcdc': [0.5],
    'wcol': [0.5],

    'hops': [2],
    'replicationHops': [4],

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
    'staggeredStart': [True, False],
    'lowPowerThreshold': [0.4],
}

hops_params = {
    'runTime': [2400],
    'waitTime': [600],
    'lookupTime': [30],
    'updateTime': [120],
    'dataSize': [512],
    'profileUpdateDelay': [6],

    'totalNodes': [160],
    'storageSpace': lambda p: p['totalNodes'],
    'bufferSpace': lambda p: p['totalNodes'],

    'wcdc': [0.5],
    'wcol': [0.5],

    'hops':  [1, 2, 3, 4, 5], # [2]
    'replicationHops': [4],

    'carryingThreshold': [0.4],
    'forwardingThreshold': [0.6],

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
    'staggeredStart': [True, False],
    'lowPowerThreshold': [0.4]
}



campaign.run_missing_simulations(param_combination, runs=30, stop_on_errors=False)



#print(campaign.get_space(param_space=param_combination, runs=30))

#exit(0)

#def getMessages(r):
#    return float(r['output']['stdout'].split('\n')[2].split('\t')[1])



@sem.utils.output_labels([
    'successRatio',
    'InitalTotalSaves', 'InitalTotalLookups', 'InitalTotalSuccess', 'InitalTotalFailed', 'InitalTotalLate', 'InitalTotalCacheHits', 'InitalTotalPending', 'InitalTotalStepUp', 'InitalTotalStepDowns', 'InitalTotalPowerloss', 'InitalTotalPowerRecharge', 'InitalMinQueryDelay', 'InitalMaxQueryDelay', 'InitalAvgQueryDelay', 'InitalTotalSent', 'InitalTotalExpectedRecipients', 'InitalTotalReceived', 'InitalTotalDuplicates', 'InitalTotalSentUNKOWN', 'InitalTotalSentPING', 'InitalTotalSentMODE_CHANGE', 'InitalTotalSentELECTION_REQUEST', 'InitalTotalSentSTORE', 'InitalTotalSentLOOKUP', 'InitalTotalSentLOOKUP_RESPONSE', 'InitalTotalSentTRANSFER', 'InitalTotalExpectedReceivesUNKOWN', 'InitalTotalExpectedReceivesPING', 'InitalTotalExpectedReceivesMODE_CHANGE', 'InitalTotalExpectedReceivesELECTION_REQUEST', 'InitalTotalExpectedReceivesSTORE', 'InitalTotalExpectedReceivesLOOKUP', 'InitalTotalExpectedReceivesLOOKUP_RESPONSE', 'InitalTotalExpectedReceivesTRANSFER', 'InitalTotalReceivedUNKOWN', 'InitalTotalReceivedPING', 'InitalTotalReceivedMODE_CHANGE', 'InitalTotalReceivedELECTION_REQUEST', 'InitalTotalReceivedSTORE', 'InitalTotalReceivedLOOKUP', 'InitalTotalReceivedLOOKUP_RESPONSE', 'InitalTotalReceivedTRANSFER',
    'FinalTotalSaves', 'FinalTotalLookups', 'FinalTotalSuccess', 'FinalTotalFailed', 'FinalTotalLate', 'FinalTotalCacheHits', 'FinalTotalPending', 'FinalTotalStepUp', 'FinalTotalStepDowns', 'FinalTotalPowerloss', 'FinalTotalPowerRecharge', 'FinalMinQueryDelay', 'FinalMaxQueryDelay', 'FinalAvgQueryDelay', 'FinalTotalSent', 'FinalTotalExpectedRecipients', 'FinalTotalReceived', 'FinalTotalDuplicates', 'FinalTotalSentUNKOWN', 'FinalTotalSentPING', 'FinalTotalSentMODE_CHANGE', 'FinalTotalSentELECTION_REQUEST', 'FinalTotalSentSTORE', 'FinalTotalSentLOOKUP', 'FinalTotalSentLOOKUP_RESPONSE', 'FinalTotalSentTRANSFER', 'FinalTotalExpectedReceivesUNKOWN', 'FinalTotalExpectedReceivesPING', 'FinalTotalExpectedReceivesMODE_CHANGE', 'FinalTotalExpectedReceivesELECTION_REQUEST', 'FinalTotalExpectedReceivesSTORE', 'FinalTotalExpectedReceivesLOOKUP', 'FinalTotalExpectedReceivesLOOKUP_RESPONSE', 'FinalTotalExpectedReceivesTRANSFER', 'FinalTotalReceivedUNKOWN', 'FinalTotalReceivedPING', 'FinalTotalReceivedMODE_CHANGE', 'FinalTotalReceivedELECTION_REQUEST', 'FinalTotalReceivedSTORE', 'FinalTotalReceivedLOOKUP', 'FinalTotalReceivedLOOKUP_RESPONSE', 'FinalTotalReceivedTRANSFER'
    ])
@sem.utils.only_load_some_files(['stdout'])
def get_all(result):
    if result['output']['stdout'] == "":
        return [float(-1)]
    lines = result['output']['stdout'].strip().split('\n')
    res = { r.split('\t')[0]: float(r.split('\t')[1]) for r in lines}
    successRatio = res['FinalTotalSuccess'] / (res['FinalTotalFailed'] + res['FinalTotalPending'])
    return [successRatio] + [float(r.split('\t')[1]) for r in lines]


hopData = campaign.get_results_as_dataframe(get_all, params=hops_params)
sns.catplot(data=hopData,
            x='hops',
            y='FinalTotalSent',
            col='staggeredStart',
            kind='point'
            )
plt.savefig(os.path.join(figure_dir, 'hops_traffic.pdf'))

sns.catplot(data=hopData,
            x='hops',
            y='successRatio',
            col='staggeredStart',
            kind='point'
            )
plt.savefig(os.path.join(figure_dir, 'hops_success_ratio.pdf'))



sns.catplot(data=hopData,
            x='hops',
            y='FinalMinQueryDelay',
            col='staggeredStart',
            kind='point'
            )
sns.catplot(data=hopData,
            x='hops',
            y='FinalMaxQueryDelay',
            col='staggeredStart',
            kind='point'
            )
sns.catplot(data=hopData,
            x='hops',
            y='FinalAvgQueryDelay',
            col='staggeredStart',
            kind='point'
            )


plt.savefig(os.path.join(figure_dir, 'hops_query_delay.pdf'))


nodesData = campaign.get_results_as_dataframe(get_all, params=totalnodes_params)
sns.catplot(data=nodesData,
            x='totalNodes',
            y='FinalTotalSent',
            col='staggeredStart',
            kind='point'
            )
plt.savefig(os.path.join(figure_dir, 'nodes_traffic.pdf'))

sns.catplot(data=nodesData,
            x='totalNodes',
            y='successRatio',
            col='staggeredStart',
            kind='point'
            )
plt.savefig(os.path.join(figure_dir, 'nodes_success_ratio.pdf'))



carryingData = campaign.get_results_as_dataframe(get_all, params=carrying_params)
sns.catplot(data=carryingData,
            x='carryingThreshold',
            y='FinalTotalSent',
            col='staggeredStart',
            kind='point'
            )
plt.savefig(os.path.join(figure_dir, 'carrying_traffic.pdf'))

sns.catplot(data=carryingData,
            x='carryingThreshold',
            y='successRatio',
            col='staggeredStart',
            kind='point'
            )
plt.savefig(os.path.join(figure_dir, 'carrying_success_ratio.pdf'))


forwardingData = campaign.get_results_as_dataframe(get_all, params=forwarding_params)
sns.catplot(data=forwardingData,
            x='forwardingThreshold',
            y='FinalTotalSent',
            col='staggeredStart',
            kind='point'
            )
plt.savefig(os.path.join(figure_dir, 'forwarding_traffic.pdf'))

sns.catplot(data=forwardingData,
            x='forwardingThreshold',
            y='successRatio',
            col='staggeredStart',
            kind='point'
            )
plt.savefig(os.path.join(figure_dir, 'forwarding_success_ratio.pdf'))
