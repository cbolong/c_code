#~/bin/bash

if [ "$1" == "clean" ]; then
    rm *.o *.i *.s
	exit 0
fi


gcc -E compile.c -o compile.i
gcc -S compile.i -o compile.s
as compile.s -o compile.o

gcc -E swap.c -o swap.i
gcc -S swap.i -o swap.s
as swap.s -o swap.o

ld -r compile.o swap.o -o hello.o
gcc hello.o -o hello

