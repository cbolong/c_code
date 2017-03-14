#include <stdio.h>

int main()
{
	int i = 1;
	int j = 2;

	printf("orig  i=%d , j=%d \n", i, j);
	swap(&i, &j);
	printf("swap  i=%d , j=%d \n", i, j);

	return 0;
}
