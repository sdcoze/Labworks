#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

void sighandler ( int sig) {
	printf("Signal handler for signal =%d \n",sig);
	wait(0);
}
int main (void)
{
	int i;
	signal(SIGCHLD, &sighandler);
	pid_t pid = fork();
	if(pid == 0 ){
		fprintf(stdout,"Child of Muranov is finished\n");
		_exit(0);
	}
	else {
		fprintf(stdout, "the parent start ...\n");
		sleep(45);
		fprintf(stdout, "the parent finish ...\n");
	}
return EXIT_SUCCESS;
}
