#include <stdio.h>
#include <stdlib.h>

int add(int n, int m) {
    return n+m;
}

int mult(int n, int m)
{
	return n*m;
}

int sub(int n, int m)
{
	return n-m;
}

int (*call[])(int, int) = {add, mult, sub};

void main(int argc, char *argv[])
{
	//printf("0. 2+1=[%d]\n", call[0](2,1));
	//printf("1. 2*1=[%d]\n", call[1](2,1));
	//printf("2. 2-1=[%d]\n", call[2](2,1));
	printf("0. 2+1=[%d]\n", (*call[0])(2,1));
	printf("1. 2*1=[%d]\n", (*call[1])(2,1));
	printf("2. 2-1=[%d]\n", (*call[2])(2,1));
}
