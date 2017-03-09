#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

int pass = 0;

void *func1(void *data){

	sleep(5);
	pass = rand()%100;
	printf("thread 1: random [%d]\n", pass);
	return NULL;
}

void *func2(void *data){
    int i = 10;
	    
    while(i>0)
	{
		printf("thread 2:[%d]\n", pass);
		sleep(1);
		i--;
	}
    return NULL;
}

void main(int argc, char *argv[])
{
	pthread_t thread1;
	pthread_t thread2;
	
	pthread_create(&thread1, NULL, func1, NULL);
	pthread_create(&thread2, NULL, func2, NULL);
	
	pthread_join(thread1, NULL);
	pthread_join(thread2, NULL);
	
	return;
}
