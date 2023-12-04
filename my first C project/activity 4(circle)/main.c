#include <stdio.h>
#include <stdbool.h>
# define pi 3.14

int main()
{
   float r;
   float c;
   float a;

   printf("enter the radius :\n");
   scanf("%f",& r);
   c = (2*pi*r);
   printf("the circumference of a circle is %f\n",c);

   a = pi* r*r ;
   printf("the area of a circle is %f",a);
    return 0;
}
