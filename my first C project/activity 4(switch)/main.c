#include <stdio.h>
#include <stdbool.h>

int main()
{
   int number ;
   printf("Enter number 1 or 2:\n 1.Converts Celsius to Fahrenheit:\n 2.Converts Fahrenheit to kelvin:\n\n Enter your number:");
   scanf("i",& number);

   float temperature ;

   switch(number)
   {
   case 1:
    printf("Enter the value in degree Celsius :\t\n");
    scanf("%f",& temperature);
    float ans1= (temperature *9/5)+32;
    printf("Fahrenheit : %f",ans1);
    break;

   case 2:
    printf("Enter the value in Fahrenheit :\t\n");
    scanf("%f",& temperature);
    float ans2 = (temperature -32)*5/9 +273.15;
    printf("Kelvin : %f",ans2);
    break;


   }

    return 0;
}
