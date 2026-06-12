#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
  srand(time(NULL));
  int random = (rand()%2); //it will give random number 1 and 2
  printf("%d",random);
  return 0;
} 