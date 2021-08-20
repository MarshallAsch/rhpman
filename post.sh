#!/bin/bash



./test.py -s rhpman --text=results
res=$?


mv results.txt /output
exit $res
