#include <stdio.h>


int main( ) {
  //Temperature program
char choice = '\0';
float fahrenheit =0.0f;
float celsius =0.0f;

printf("Temperature Conversion Program\n");
printf("C.Celsius to Fahrenheit\n");
printf("F.Fahreheit to celsius\n");
printf(" Is the temp Celsius (C) or Fahrenheit (F)?:");
scanf("%c",&choice);

if(choice=='C'){
  printf("Enter the Temperature in celsius");
  scanf("%f",&celsius);
  fahrenheit=((celsius*9/5)+32);
  printf("For %f degree the fahreheit = %f",celsius,fahrenheit);

}
else if(choice=='F'){
    printf("Enter the Temperature in Fahrenheit");
  scanf("%f",&fahrenheit);
  celsius=((fahrenheit-32)*5/9);
  printf("For %f degree the fahreheit = %f",fahrenheit,celsius);

}
else{
  printf("Invalid Choice");
}

return 0;
}