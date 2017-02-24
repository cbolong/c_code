#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Common.h"

void main(int argc, char *argv[])
{
	MOVIE movie ;
	
	movie.index = 0;
	strcpy(movie.name, "Game war");
	strcpy(movie.director, "WanWan");
	strcpy(movie.author.name, "J.Martin");
	movie.author.birth_year = 1900;
	movie.author.birth_month = 11;
	movie.author.birth_day = 7;
	
	printf("Movie_1 info: [%d] [%s] [%s] [%s] [%d] [%d] [%d]\n",movie.index, 
										movie.name,
										movie.director,
										movie.author.name,
										movie.author.birth_year,
										movie.author.birth_month,
										movie.author.birth_day
										);
}
