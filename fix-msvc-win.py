#!/usr/bin/env python3

import sys

if len(sys.argv) < 2:
    print("usage: fix-msvc-win.py path/to/build.ninja")
    exit(1)

with open(sys.argv[1], 'rt') as r_build_file:
    build_file = r_build_file.read()

    with open(sys.argv[1], 'wt') as w_build_file:
        lines = build_file.splitlines()
        for line in lines:
            # replace $in with $in_newline 
            if 'rspfile_content = ' in line and '$in_newline' not in line:
                line = line.replace(' $in ', ' $in_newline ')
            w_build_file.write(line + "\n")
