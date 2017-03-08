#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void main(int argc, char *argv[])
{
	int i = 0;
	
	printf("#####Now pid [%d]\n",getpid());

	pid_t fpid = fork();
		
	if(fpid < 0)
		printf("fork() fail.\n");
	else if(fpid == 0)
		printf("I am the child process, Count is %d , ID is %d , Parent ID is %d , fork id is %d\n", i, getpid(), getppid(), fpid);
	else if(fpid > 0)
		printf("I am the parent process, Count is %d , ID is %d , Parent ID is %d , fork id is %d\n", i,getpid(), getppid(), fpid);
	
	printf("Process End\n");
}
