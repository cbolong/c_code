#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>

void main(int argc, char *argv[])
{
	int status;
	pid_t fpid;
	pid_t fpid2;
	
	printf("#####Now pid [%d]\n",getpid());
	if((fpid = fork()) > 0)
	{
		waitpid(fpid, &status, NULL);
		printf("I am grand father in process A, doing something.\n");
		sleep(20);
	}
	else
	{
		if((fpid2 = fork()) > 0)
		{
			printf("I am father in process B, exit.\n");
			exit(0);
		}
		else if(fpid2 == 0)
		{
			printf("I am child in process B, taken by init.\n");
		}
	}
}
