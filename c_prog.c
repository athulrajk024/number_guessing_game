#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>

int main()
{
  //float x=3.14; 
  //x=sqrt(x);
  //x= pow(x,2);
  //x=round(x);
  //x=ceil(x);
  //printf("%f",x);
  //
  /*bool isStudent = false;

  if(isStudent == true){
    printf("You are a student");
  }
  else{
    printf("You are NOT a student");
    
  }
  
  */
 char name[50]="";
 printf("Enter your name:");
 fgets(name, sizeof(name),stdin);
 name[strlen(name)-1]='\0';

 if(strlen(name)==0){
  printf("You didn't write your name");
 }
  else{
    printf("Hello %s", name);
  }



return 0;
}