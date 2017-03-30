#include <stdio.h>
#include <string.h>

/*
* input  : n
* output : 1-2+3-4+5-6....+n
*/
int main()
{
	unsigned int i;
	int j, def, count;
	
	scanf("%d", &i);
	printf("n is %d\n", i);
	
	count = 0;
	
	for(j=1; j<=i; j++)
	{
		def = j%2;
		if(0==def)
			count=count-j;
		else
			count=count+j;
		printf("j:[%d] def:[%d] count is %d\n", j, def, count);
	}
	printf("total is %d\n", count);
	
    return 0;
}
