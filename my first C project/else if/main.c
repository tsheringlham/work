#include <stdio.h>
#include <stdlib.h>

int main()
{
    int time = 24;
    int inputtime;
    printf("Enter your current time :\n");
    scanf("%d",& inputtime);

   if (inputtime<12)
   {
       printf("good morning");
   } else if (inputtime  12)
   {
       printf("Good Evening");
   } else
   {
       printf(" Noon");
   }
   return 0;
}
