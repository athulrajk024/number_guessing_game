#include<stdio.h>
#include<math.h>

int main( ){

  int choice =0;
  float pounds =0;
  float kilograms=0.0f;

  printf("Weight conversion calculator\n");
  printf("1.Kilograms to pounds\n");
  printf("2.Pounds to killogram\n");

  printf("Enter your choice(1 or 2)");

  scanf("%d", &choice);
  if(choice==1)
  {
    //k to p
    printf("Enter the weight in kilogram\n");
    scanf("%f",&kilograms);
    pounds=kilograms*2.2046226;
    printf("%f kilograms = %f pounds",kilograms,pounds);


  }
  else if(choice ==2){
    //pounds to killogram
    printf("Enter the weight in pounds");
    scanf("%f",&pounds);
    kilograms=pounds*0.4535923;
    printf("%f pounds = %f kilograms ",pounds,kilograms);
  }
  else{
    printf("Invalid choice! Enter the values -- 1 or 2");

  }




return 0;
}