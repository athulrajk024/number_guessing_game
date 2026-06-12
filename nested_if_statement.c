#include <stdio.h>
#include <stdbool.h>

int main() {

  float price =10.00;
  bool isStudent = true;

  if(isStudent){
    printf("You get a student discount of 10%");
    price*=0.9;

  }
  printf("The price of a Ticket is : %.2f\n ",price);
return 0;
}