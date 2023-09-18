#!/bin/bash
gcc -Wall -Wextra -pedantic -c -fPIC *.c
gcc -shared -o liball.so *.c
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
