#!/bin/bash
gcc -Wall -pendantic -Werror -Wextra -o *.c
ar -rc liball.a *.o
ranlib liball.a
