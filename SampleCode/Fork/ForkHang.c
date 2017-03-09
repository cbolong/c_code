#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void main(int argc, char *argv[])
{
	int status = 0;
	int ret;
	
	printf("#####Now pid [%d]\n",getpid());

	pid_t fpid = fork();
	
	if(fpid < 0)
	{
		printf("fork() fail.\n");
	}
	else if(fpid == 0)
	{
		printf("I am the child process\n");
		exit(1);
	}		
	else if(fpid > 0)
	{
		printf("I am the parent process, and I am waiting child done.\n");
		wait(&status);
		//waitpid(fpid, &status, WNOHANG);
		
        if(WIFEXITED(status)) 
        {
            ret = WEXITSTATUS(status);
        } 
        else if(WIFSIGNALED(status))
        {
            ret = WTERMSIG(status);
        }
		printf("status: [%d] rel: [%d]\n", status, ret);
	}		
	
	printf("Process End\n");
}
