#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Common.h"

//#define LEVEL1 TRUE
#define LEVEL2 TRUE

void main(int argc, char *argv[])
{
	
#if defined(LEVEL1)
	/*Normal sample*/
	struct _BOOKS book1;
	BOOK book2 = {"Let it go", "nick", 45};
	
	strcpy(book1.name, "Game of war");
	strcpy(book1.author, "hondor");
	book1.book_id = 23;
	
	printf("Book_1 info: [%s] [%s] [%d]\n",book1.name,
										book1.author,
										book1.book_id);

	printf("Book_2 info: [%s] [%s] [%d]\n",book2.name,
										book2.author,
										book2.book_id);
	/*Normal sample end*/
#elif defined(LEVEL2)
	/*Level2 sample*/
	ID_BOOK book;
	//book = (ID_BOOK)calloc(1,sizeof(ID_BOOK));
	book = (ID_BOOK)malloc(sizeof(BOOK)*1);
	strcpy(book->name, "Star war");
	strcpy(book->author, "Stark");
	book->book_id = 23;

    printf("Book_1 info: [%s] [%s] [%d]\n",book->name,
                                        book->author,
                                      	book->book_id);
	/*Level2 sample end*/
#endif
}
