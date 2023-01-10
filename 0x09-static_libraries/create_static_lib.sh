#!/bin/bash
gcc -Wall -padantic -Warror -Wextra -c *.c
ar -rc liball.a *.o
ranlib liball.a
