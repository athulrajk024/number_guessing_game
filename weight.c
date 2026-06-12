#include <stdio.h>
#include <string.h>
int main(void){
  int opt =0;
  float pound= 0.0f;
  float kg= 0.0f;
  pound=kg*2.20462;
  kg=pound/2.20462;
  printf("1.Convert KG to POUND \n 2.Conver POUND to KG  \n Select any optt ");
  scanf("%d",&opt);
  if(opt==0){
    printf("Select & Provide valid credentials");

  }
  else{
    if(opt==1){
      printf("Enter the kg: ");
      if (scanf("%f", &kg) == '\0') {
        printf("Select & Provide valid credentials\n");
        return 1;
      }
      pound = kg * 2.20462f;
      printf("The %.2f kg is %.2f pound\n", kg, pound);
    } 
    else{
      printf("Enter the pound: ");
      if (scanf("%f", &pound) != '\0') {
        printf("Select & Provide valid credentials\n");
        return 1;
      }
      kg = pound / 2.20462f;
      printf("The %.2f pound is %.2f kg\n", pound, kg);
    }
  }
  


}