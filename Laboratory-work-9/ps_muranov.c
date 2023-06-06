#include <stdio.h>
#include <unistd.h>

int main (void)
{   
    char* ps_args[] = {"ps", "-o", "pid,ppid", NULL};
    pid_t pid = fork();
    if (pid != 0)
    {
        sleep(1);
	execv("/bin/ps",ps_args);
    }
    else
	fprintf(stdout,"The child of Muranov executes: ps \n");

    return 0;
}


