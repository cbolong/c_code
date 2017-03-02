#include <stdio.h>

/*
Input : int
Output : 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181, 6765, 10946..
*/

int fib(int i)
{
	switch(i)
	{
		case 0:
			return 0;
		case 1:
			return 1;
		default:
			return (fib(i-1)+fib(i-2));
	}
	return 0;
}

void main()
{
	int i, j;
	scanf("%d",&i);
	for(j=0; j<i; j++)
	{
		printf("[%d] ", fib(j));
	}
	printf("\n");
}