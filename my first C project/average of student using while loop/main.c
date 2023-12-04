#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    int b=1;
    float a;
    float sub,i,sum;

   while(b <= 10)
   {
       printf("enter score %d:",b);
       scanf("%f",& a);
       b+= 1;
       sum+=a;

   }
   printf(" the sum is %f",sum);
   printf("the average is %f",sum/10);






    return 0;
}

