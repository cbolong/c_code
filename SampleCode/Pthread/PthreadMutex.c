#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <sys/types.h>

#define FILENAME demo.txt

pthread_mutex_t mutex;

void *write(void *data){
    int i = *((int *)data);
	
	if(0 != pthread_mutex_trylock(&mutex))
	{
		printf("pthread_mutex_trylock() fail\n");
		return;
	}
    printf("Hello %d\n", i);
	sleep(2);
    pthread_mutex_unlock(&mutex);
}

void main(int argc, char *argv[])
{
	pthread_t thread[2];
	int i = 0;
	int rel = 0;
	pthread_mutex_init(&mutex, NULL);
	
	while(i<2)
	{
		if(0 != (rel = pthread_create(&thread[i], NULL, write, &i)))
			printf("thread_%d is not running [%d]\n", i, rel);
		//pthread_join(thread[i], NULL);
		sleep(1);
		i++;
	}
	pthread_mutex_destroy(&mutex);
}
