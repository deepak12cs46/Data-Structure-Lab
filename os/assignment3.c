/*
ROLL NO. 12/CS/45 & 46
NAME BIJAY KHATRI & DEEPAK VERMA
*/
#include <signal.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
void fn(int sig)
{
	printf("\nSIGNAL RECEIVED %d\n CHILD RECEIVED SIGNAL \n",sig);
	exit(0);
}

void fn1(int sig)
{
	printf("\nSIGNAL RECEIVED %d\n CHILD RECEIVED SIGNAL \n",sig);
	exit(1);
}
int main()
{
	pid_t pid;
	pid=fork();
	if(pid==0)
	{
		(void) signal(SIGALRM,fn);
		while(1)
			printf("\nCHILD WAITING\n");
	}
	else 
	{
		(void) signal(SIGCHLD,fn1);
		sleep(1);
		kill(pid,SIGALRM);
		while(1)
		{
			printf("\nPARENT WAITING\n");
			sleep(1);
		}
	}
	exit(1);
}