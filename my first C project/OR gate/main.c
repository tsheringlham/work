#include <stdio.h>
#include <stdbool.h>

int main()
{
   int time = 20, inputtime;
   printf("Enter your current time:\t\n");
   scanf("%d",& inputtime);

   if(inputtime<12)
   {
       printf("Good day.");
   }else if (inputtime = 12)
   {
       printf("Noon");
   }
    else
   {
       printf("Good evening.");
   }

    return 0;
}
