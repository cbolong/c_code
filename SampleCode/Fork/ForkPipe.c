#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main()
{
	//pipe[0] => READ   pipe[1] => WRITE
	int pi[2];
	char buf[80];
	int status = 0;
	printf("I am the Top, ID is %d , Parent ID is %d\n", getpid(), getppid());
	
	pipe(pi);

	//Send message to child process from parent process by using pipe
	//pipe : communication by two process
	//

	pid_t fpid = fork();
	
	if(fpid < 0)
		printf("fork fail\n");
	else if(0 == fpid)
	{
		printf( "This is in the child process, read a string from the pipe.\n" );
		close( pi[1] );
		read( pi[0], buf, sizeof(buf) );
		while(strcmp(buf, "end") != 0)
		{
			printf( "%s\n", buf );
			read( pi[0], buf, sizeof(buf) );
		}
		printf( "This is in the child process, receive \"end\" exit.\n" );
		close( pi[0] );
	}
	else
	{
		printf( "This is in the father process, write a string to the pipe.\n" );
		char s[] = "Message , write by pipe.\n";
		close( pi[0] );
		sleep(1);
		write( pi[1], s, sizeof(s) );
		sleep(1);
		char *s1 = "Message , Do twice.";
		write( pi[1], s1, sizeof(s) );
		sleep(1);
		s1 = "end";
		write( pi[1], s1, sizeof(s) );
		waitpid(fpid, &status, 0);
		close( pi[1] );
	}

	
	return 0;
}
