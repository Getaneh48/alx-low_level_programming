#!/bin/bash

find . -type f -iname "*.c" -exec gcc -c {} \;

ar -rc liball.a *.o

