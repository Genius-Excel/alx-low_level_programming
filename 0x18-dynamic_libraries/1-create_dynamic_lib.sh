#!/bin/bash
gcc -c -fPIC *.c -Wall -Werror -Wextra -pedantic -std=gnu89
gcc -shared *.o -o liball.so
