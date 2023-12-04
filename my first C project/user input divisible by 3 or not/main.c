#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    int number;

    printf("enter the number :");
    scanf("%d", & number);

   if(number == 0)
   {
       printf(" not divisible  by 3");
   }
   else if (number % 3 == 0)
   {
       printf(" divisible by 3 ");
   }
   else
   {
       printf("not divisible by 3");
   }

    return 0;
}










