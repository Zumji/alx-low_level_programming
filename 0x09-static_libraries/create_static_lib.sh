#!/bin/bash
gcc -wall -padantic -warror -Wextra -c *.c
ar -rc liball.a *.o
ranlib liball.a
