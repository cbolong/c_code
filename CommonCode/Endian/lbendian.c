#include <stdio.h>

void main()
{
	unsigned int x = 12345;
	char *a = (char*) &x;
	//0000 0000 0000 0000 0011 0000 0011 1001
	//  0    0    0    0    3    0    3    9
	printf ("*a     is: 0x%x\n", *a);
	printf ("*(a+1) is: 0x%x\n", *(a+1));
	printf ("*(a+2) is: 0x%x\n", *(a+2));
	printf ("*(a+2) is: 0x%x\n", *(a+3));
	
	if(*a == 0x39)
		printf("Little endian\n");
	else
		printf("Big endian\n");
}
