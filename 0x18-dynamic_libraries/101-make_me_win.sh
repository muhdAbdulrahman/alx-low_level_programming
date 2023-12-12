#!/bin/bash
wget -P /expt https://github.com/muhdAbdulrahman/alx-low_level_programming/raw/master/0x18-dynamic_libraries/jackpotlib.so
export LD_PRELOAD=/expt/jackpotlib.so
