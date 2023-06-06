#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main (void)
{
  pid_t pid =fork();
  if (pid == 0){
    fprintf(stderr,"I am Zombie-process of Muranov!\n");
  _exit(0);
  }
  else{
    fprintf(stderr,"the parent start ...\n");
    sleep(10);
    fprintf(stderr,"the parent finish ...\n");
  }
return EXIT_SUCCESS;
}
