#!/bin/bash

if [[ "$1" == "bash" ]]; then
    bash --init-file <(echo "ls; pwd")
    exit 0
elif [[ "$1" == "sem" ]]; then
    echo "running sem script"
    mkdir -p $RESULTS_DIR
    contrib/rhpman/simulation.py
    exit $?
else
    echo "run waf and pass through all flags '$@'"
    ./waf --run "rhpman-example $@"
    exit $?
fi
