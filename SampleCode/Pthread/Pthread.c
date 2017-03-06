#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void *hello(void *data){
    int i = *((int *)data);
    
    printf("Hello %d\n", i);
    return NULL;
}

void main(int argc, char *argv[])
{
	pthread_t thread;
	int i, rc;
	for(i=0; i<3; i++)
	{
		pthread_create(&thread, NULL, hello, (void *)&i);
		//rc = pthread_join(thread, NULL);
		//sleep(1);
	}	
	//rc = pthread_join(thread, NULL);
	//sleep(2);
}
