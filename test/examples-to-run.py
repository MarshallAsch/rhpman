#! /usr/bin/env python3
## -*- Mode: python; py-indent-offset: 4; indent-tabs-mode: nil; coding: utf-8; -*-

# A list of C++ examples to run in order to ensure that they remain
# buildable and runnable over time.  Each tuple in the list contains
#
#     (example_name, do_run, do_valgrind_run).
#
# See test.py for more information.
cpp_examples = [
    ("trigger-timeouts-example", True, "False"),
    ("no-timeouts-example", True, "False"),
    ("ping-count-example", True, "False"),
    ("collisions-example", True, "False"),
    ("stable-network-one-election-example", True, "False"),
    ("battery-runtime-example", True, "False"),
    ("low-battery-runtime-example", True, "False"),
    ("stable-network-lookup-success-example", True, "False"),

]

# A list of Python examples to run in order to ensure that they remain
# runnable over time.  Each tuple in the list contains
#
#     (example_name, do_run).
#
# See test.py for more information.
python_examples = []