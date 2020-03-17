#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>

int score;

void handler(int signal){
  printf("Le signal %d a bien été reçu\n", signal);
  printf("Score: %d\n", score);
}

int main(){
  srand(time(NULL));
  struct sigaction action;
  int i;
  action.sa_handler = handler;
  action.sa_flags = 0;
  sigemptyset(&action.sa_mask);
  sigaction(SIGINT,&action,NULL);
  sigaction(SIGQUIT,&action,NULL);
  sigaction(SIGTERM, &action, NULL);

  int a = rand();
  printf("%d\n",a);
  int b = rand();
  printf("%d\n",b);
  while(1)

    //for(i = 0; i < 10; i++){
      //printf("%d\n", a);
      //scanf("%d", score);
    //}

  return 0;
}
