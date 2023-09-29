#!/usr/bin/env python3

import sys

if len(sys.argv) < 2:
    print("usage: fix-llvm-win.py path/to/build.ninja")
    exit(1)

with open(sys.argv[1], 'rt') as r_build_file:
    build_file = r_build_file.read()
    # i have no idea why this isn't already a thing because everything now supports unix-style slashes.
    build_file = build_file.replace('\\', '/')

    with open(sys.argv[1], 'wt') as w_build_file:
        lines = build_file.splitlines()
        for line in lines:
            # add -Wl,/def: for .def files otherwise the linker thinks they're .obj files
            if '.def"' in line:
                pos = line.index('.def"')
                last_space = line[:pos].rindex(' "')
                line = line[:last_space + 2] + "-Wl,/def:" + line[last_space + 2:]
            w_build_file.write(line + "\n")
