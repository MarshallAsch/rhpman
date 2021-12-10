#!/bin/bash


./test.py -s rhpman --text=results
exit_status=$?


# run all the examples
./test.py --text=example_res -e single-node; (( exit_status = exit_status || $? ))
cat example_res.txt >> results.txt
./test.py --text=example_res -e trigger-timeouts-example; (( exit_status = exit_status || $? ))
cat example_res.txt >> results.txt
./test.py --text=example_res -e no-timeouts-example; (( exit_status = exit_status || $? ))
cat example_res.txt >> results.txt
./test.py --text=example_res -e ping-count-example; (( exit_status = exit_status || $? ))
cat example_res.txt >> results.txt
./test.py --text=example_res -e collisions-example; (( exit_status = exit_status || $? ))
cat example_res.txt >> results.txt
./test.py --text=example_res -e no-collisions-example; (( exit_status = exit_status || $? ))
cat example_res.txt >> results.txt
./test.py --text=example_res -e no-collisions-example-many; (( exit_status = exit_status || $? ))
cat example_res.txt >> results.txt
./test.py --text=example_res -e many-out-of-range-node; (( exit_status = exit_status || $? ))
cat example_res.txt >> results.txt
./test.py --text=example_res -e stable-network-one-election-example; (( exit_status = exit_status || $? ))
cat example_res.txt >> results.txt
./test.py --text=example_res -e stable-network-lookup-success-example; (( exit_status = exit_status || $? ))
cat example_res.txt >> results.txt

## These are very very very long running tests, they probably should not be run in the pipeline
##

#./test.py --text=example_res -e battery-runtime-example; (( exit_status = exit_status || $? ))
#cat example_res.txt >> results.txt
#./test.py --text=example_res -e low-battery-runtime-example; (( exit_status = exit_status || $? ))
#cat example_res.txt >> results.txt




mkdir -p /output
mv results.txt /output/results.txt
exit $exit_status
