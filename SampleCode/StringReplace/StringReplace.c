#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

char *ReplaceStr(char *Base, char *find, char *rep)
{
	int LenFind = strlen(find);
	int LenRep = strlen(rep);
	int LenBase = strlen(Base);
	char *WalkingString = Base;
	char *Location;
	int index = 0;
	char *result;
	char *tmp;
	
	result = (char*)malloc(sizeof(char)*LenBase);
	if(NULL==result)
		return NULL;
	strcpy(result, Base);
	Location = strstr(WalkingString, find);
	
	while(Location!=NULL)
	{
		index += (Location - WalkingString);
		result[index] = '\0';
		
		LenBase += (LenRep - LenFind);
		tmp = (char*)realloc(result, sizeof(char)*(LenBase));
		if(NULL==tmp)
			return NULL;
		result = tmp;
		strcat(result, rep);
		//walking string add find string length
		WalkingString = Location + LenFind;
		strcat(result, WalkingString);
		index += LenRep;
		Location = strstr(WalkingString, find);
	}
	
	return result;
}

void main(int argc, char *argv[])
{
	char const *options = "s:";
	int opt;
	char str[256] = "";
	char *DefaultString = "appbble chebbck knobbw.";
	char *Replace = "bb";
	
	while((opt = getopt(argc, argv, options)) != -1)
	{
		switch(opt)
		{
			case 's':
				strcpy(str, optarg);
				break;
			default:
				strcpy(str, DefaultString);
				break;
		}
	}
	if(0==strlen(str))
		strcpy(str, DefaultString);
	printf("Before replace string : [%s]\n", str);
	printf("After replace string : [%s]\n", ReplaceStr(str, Replace, "vvv"));
}
