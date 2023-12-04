#include <stdio.h>
#include <stdbool.h>

int main()
{
   float c;
   float f;
   float k;
    printf("Enter the temperature in degree Celsius :\n");
    scanf("%f",& c);
    f = c*9/5+32;
    printf("The temperature in Fahrenheit is %f\n",f);

    printf(" Enter the temperature in Fahrenheit :\n");
    scanf("%f",& f);
    k= (f-32)*5/9+273.15;
    printf("The temperature in kelvin :%f",k);
    return 0;
}
