#include <stdio.h>
#include <signal.h>
#include <stdlib.h>
#include <unistd.h>


static void sig_usr(int signo) {
    if (signo == SIGUSR2)
  printf("Process of Muranov got signal\n");
}

int main (void){
  if (signal(SIGUSR2, sig_usr) == SIG_ERR)
   fprintf(stderr,"Error\n");
  printf("Waiting for a signal SIGUSR2. PID=%d.\n", getpid());

  while(1) pause();

return EXIT_SUCCESS;
}
