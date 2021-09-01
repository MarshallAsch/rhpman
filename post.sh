#!/bin/bash


./test.py -s rhpman --text=results
res=$?

mkdir -p /output
mv results.txt /output/results.txt
exit $res
