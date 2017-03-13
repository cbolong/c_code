#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct _MyID
{
	int id;
	char msg[256];
}MyID;

int showMSG(MyID *myid)
{
	printf("##id:[%d]  msg:[%s]\n",myid->id, myid->msg);
	
	return 3;
}

int (* CALLBACK)(MyID *);

void main()
{
	MyID getID;
	getID.id = 10;
	strcpy(getID.msg, "Got the message.");
	//Use normal usage
	showMSG(&getID);
	
	CALLBACK = showMSG;
	getID.id = 5;
	strcpy(getID.msg, "Got callback message.");
	int rel = CALLBACK(&getID);
	printf("##rel:[%d]\n", rel);
}
