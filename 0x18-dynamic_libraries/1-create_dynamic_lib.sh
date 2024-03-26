#!/bin/bash
gcc -c -fPIC *.c

if [ $? -eq 0 ]; then
	gcc -shared -o liball.so *.o
fi
