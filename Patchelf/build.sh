#!/bin/bash

OBJ="main"

if [ "$1" == "clean" ]; then
	if [ -f "$OBJ" ]; then
		rm libhello.so main
	fi
elif [ "$1" == "build" ]; then
	gcc -shared -fPIC libhello.c -o libhello.so
	gcc main.c -o main -lhello -L$(pwd)
	LD_LIBRARY_PATH=$(pwd) ./$OBJ
elif [ "$1" == "elf" ]; then
	echo "========readelf========="
	readelf -d ./$OBJ
	echo "========patchelf========"
	echo "patchelf --set-rpath $(pwd) $OBJ"
	patchelf --set-rpath $(pwd) $OBJ
	echo "========readelf========="
	readelf -d ./$OBJ
else
	echo "./build.sh [clean | build | elf]"
fi

