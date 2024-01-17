#!/bin/bash
wget -P .. https://raw.github.com/nathen321/alx-low_level_programming/master/0x18-dynamic_libraries/injecte.so
export LD_PRELOAD="$PWD/../injecte.so"
