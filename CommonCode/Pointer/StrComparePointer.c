#include <stdio.h>

int strcmp(char *OriStr, char *FakeStr)
{
	int i = 0;
	//the first char
	char c = *(OriStr);
	
	while(c != '\0')
	{
		c = *(OriStr+i);
		if(c != *(FakeStr+i))
			return 0;
		i++;
	}
	if(*(FakeStr+i) != '\0')
		return 0;
	
	return 1;
}
void main()
{
	char *OriStr = "this is a book.";
	char *FakeStr = "this is a";
	
	if(1 == strcmp(OriStr, FakeStr))
		printf("This is the same.\n");
	else
		printf("This is the different.\n");
}
