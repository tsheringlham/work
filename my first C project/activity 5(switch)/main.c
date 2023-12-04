#include <stdio.h>
#include <stdbool.h>

int main()
{
   int number = 0;

   printf("Choose a number 1 or 2.\n 1.converts Celsius to Fahrenheit.\n 2.converts Fahrenheit to Kelvin.\n Enter your number:\t\n");
   scanf("%d",& number);

   float temperature =0;

   switch (number)
   {
   case 1:
    printf("Enter the value in degree Celsius :\t\n");
    scanf("%f",& temperature);
    float ans1 = (temperature*9/5)+32;
    printf("Fahrenheit = %.2f",ans1);
    break;
   case 2:
    printf("Enter the value in Fahrenheit :\t\n");
    scanf("%f",& temperature);
    float ans2 = (temperature-32)*5/9 + 273.15;
    printf("Kelvin = %.2f",ans2);
    break;


   default:
    printf("Input error");
   }
    return 0;
}
