#ifndef _COMMON_H_
#define _COMMON_H_

typedef struct _BOOKS{
	char name[128];
	char author[128];
	int book_id;
}BOOK, *ID_BOOK;

typedef struct _AUTHOR_INFO{
	char name[128];
	int birth_year;
	int birth_month;
	int birth_day;
}AUTHOR_INFO, *ID_AUTHOR_INFO;

typedef struct _MOVIES{
	int index;
	char name[128];
	char director[128];
	AUTHOR_INFO author;
	struct _MOVIES *next;
}MOVIE, *ID_MOVIE;

typedef struct _MOVIES_LIST{
	int count;
	ID_MOVIE head;
	ID_MOVIE current;
	ID_MOVIE prev;
}MOVIES_LIST, *ID_MOVIES_LIST;

#endif
