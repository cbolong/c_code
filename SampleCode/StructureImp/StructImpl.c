#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Common.h"

ID_MOVIES_LIST mlist;

ID_MOVIE GetNode(void)
{
	ID_MOVIE p;
	p = (ID_MOVIE)malloc(sizeof(struct _MOVIES));
	p->next = NULL;
	return p;
}
void InsertList(ID_MOVIE list, ID_MOVIE node)
{
	/*while(list->next != NULL)
		list = list->next;
	list->next = node;*/
	if(mlist->count == 0)
	{
		mlist->head = node;
		mlist->count++;
		return;
	}
	while(mlist->head->next != NULL)
		mlist->head = mlist->head->next;
	mlist->head->next = node;
}
void InitList()
{
	mlist = (ID_MOVIES_LIST)malloc(sizeof(MOVIES_LIST));
	mlist->count = 0;
	mlist->head = (ID_MOVIE)malloc(sizeof(struct _MOVIES));
}
void main(int argc, char *argv[])
{
	struct _MOVIES *list = NULL;
	int i = 0;
	ID_MOVIE node;
	//malloc a space for it
	/*list = (ID_MOVIE)malloc(sizeof(struct _MOVIES));
	
	for(i==0; i<5; i++)
	{
		node = GetNode();
		node->index = i;
		InsertList(list, node);
	}
	while(list!=NULL)
	{
		printf("[%d]\n",list->index);
		list=list->next;
	}*/
	InitList();
	for(i==0; i<5; i++)
	{
		node = GetNode();
		node->index = i;
		InsertList(list, node);
	}
	for(i=0; i++; i<mlist->count)
	{
		printf("[%d]\n",mlist->head->index);
		mlist->head = mlist->head->next;
	}
	
	
}
