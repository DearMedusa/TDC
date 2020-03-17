#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <time.h>

int score;

void handler(int signal){
  printf("Le signal %d a bien été reçu\n", signal);
  printf("Score: %d\n", score);
}

int main(){
  srand(time(NULL));
  struct sigaction action;
  int a;
  int b;
  action.sa_handler = handler;
  action.sa_flags = 0;
  sigemptyset(&action.sa_mask);
  sigaction(SIGINT,&action,NULL);
  sigaction(SIGQUIT,&action,NULL);
  sigaction(SIGTERM, &action, NULL);
  pause();
  
  while(1){

    a = rand();
    b = rand();
    int resultat = a * b;
    printf("Test");
    printf("%d\n",a);
    printf("%d\n",b);
    printf("Resultat de la multiplication %d\n",resultat);

  }return 0;
}
