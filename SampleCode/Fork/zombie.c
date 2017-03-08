#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>

void main(int argc, char *argv[])
{
	int i = 0;
	
	printf("#####Now pid [%d]\n",getpid());
	//signal(SIGCHLD, SIG_IGN);
	pid_t fpid = fork();
		
	if(fpid < 0)
		printf("fork() fail.\n");
	else if(fpid == 0)
	{
		printf("I am the child process\n");
		//sleep(20);
	}		
	else if(fpid > 0)
	{
		printf("I am the parent process, sleeping 20 seconds\n");
		sleep(20);
		//i = wait(NULL);
		printf("waiting for pid [%d]\n",i);
	}
	
	printf("Process End\n");
}
