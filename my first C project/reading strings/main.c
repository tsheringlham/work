#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   char a[20],b[20];
   printf("Your first name\t ");
   scanf("%s",a);
   printf("Your second name\t");
   scanf("%s",b);
   printf("\nMy name is ");
   strcat(a ," Kumar ");
   printf(strcat(a,b));






    return 0;
}
