 #include <stdio.h>
int main(){
  char name[50]="";
  float price=0.0f;
  int quantity =0;
  char currency='$';
  float total =0.0f;

  printf("Enter the food item ");
  fgets(name,sizeof(name),stdin);
  printf("what is the price ");
  scanf("%f",&price);
  printf("How many would you like?:");
  scanf("%d", &quantity);
  total =price * quantity;
  printf("The total amount is %f",total);

  return 0;

}

 

  

 
 