#!/bin/bash
gcc -fPIC -c *.o
gcc -shared -o liball.so *.o
