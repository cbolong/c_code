#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ReferenceTable.h"

void main(int argc, char *argv[])
{
	char const *options = "abc";
	int opt;
	int status = -1;
	
	while((opt = getopt(argc, argv, options)) != -1)
	{
		switch(opt)
		{
			case 'a':
				status = ERROR_A;
				break;
			case 'b':
				status = ERROR_B;
				break;
			case 'c':
				status = ERROR_C;
				break;
			default:
				status = ERROR_DEFAULT;
				break;
		}
	}
	
	printf("Err Code:[%d] \nErr Str:[%s] \nErr Desc:[%s]\n", status, 
														ErrorMap[status].code, 
														ErrorMap[status].desc);
	
}
