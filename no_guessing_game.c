#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
  const int MIN=1;
  const int MAX=100;
  int guess;
  int guesses=0;
  srand(time(0));
  const int NUMBER=(rand()%MAX)+MIN;
  do{
    
    printf("ENTER your guess:");
    scanf("%d",&guess);
    if(guess>NUMBER){
      printf("too high\n");
    }
    else if(guess<NUMBER){
      printf("too low\n");
    }
    guesses++;


  }while(guess!=NUMBER);

  printf("*****************************************\n");
  printf("\nNUMBER:%d",NUMBER);
  printf("\nNO OF GUESSES:%d",guesses);
  printf("\n*****************************************\n");
}