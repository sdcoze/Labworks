#include <stdio.h>
#include <unistd.h>

int main (void)
{
    
    fprintf(stdout,"Group Process id=%d\n",getpgrp());
    fprintf(stdout,"Process id=%d\n",getpid());
    fprintf(stdout,"Process parent id=%d\n",getppid());
    fprintf(stdout,"User id=%d\n",getuid());
    fprintf(stdout,"Group user id=%d\n",getgid());
     
    return 0;
}
