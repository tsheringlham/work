#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    int num,i=1;
    int sum = 0;

    printf("enter any natural number:");
    scanf("%d",&num);


   while(i<=num)
   {
       sum=sum+i;
       i++;

   }
   printf("sum = %d",sum);







    return 0;
}

