#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  srand(time(NULL));
  int guess=0;
  int tries=0;
  int min=1;
  int max=100;
  int answer=(rand()%(max-min+1)+min);

  printf("****NUMBER GUESSING GAME****\n");
  do{
    printf("Guess a number btw %d -%d ", min,max);
    scanf("%d",&guess);
    tries++;

    if(guess < answer){
      printf("The answer is lower\n");

    }
    else if(guess > answer) {
      printf("The number is higher\n");
    }
    else{
      printf("The answer is correct\n");
    }


  }while(guess != answer);
  printf("The answer is %d\n",answer);
  printf("The is got from %d tries",tries);

}