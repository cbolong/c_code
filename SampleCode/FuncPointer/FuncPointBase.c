#include <stdio.h>
#include <stdlib.h>

int (*call)(int, int);

int addInt(int n, int m) {
    return n+m;
}

void main(int argc, char *argv[])
{
	call = &addInt;
	
	int sum = (*call)(2, 3);
	printf("addInt() 2+3=%d\n", sum);
	
	call = addInt;
	sum = call(4, 5);
	printf("addInt() 4+5=%d\n", sum);
}
