#include <stdio.h>
#include <stdlib.h>

typedef int (*call_def)(int, int);

int (*call)(int, int);

int do_multiply(int i, int j)
{
	return i*j;
}

void redirect_func(int (*call_this)(int, int))
{
	printf("3*4=[%d]\n", call_this(3, 4));
}

void type_redirect_func(call_def call_this)
{
	printf("5*6=[%d]\n", call_this(5, 6));
}

void main(int argc, char *argv[])
{
	call = do_multiply;
	printf("1*2=[%d]\n", call(1, 2));
	
	redirect_func(do_multiply);
	type_redirect_func(do_multiply);

}
