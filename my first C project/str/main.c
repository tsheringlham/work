#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main()
{
   char f[20];
   char s[20];
   printf("enter your first name:");
   scanf("%s", & f);
   printf("enter your second name:");
   scanf("%s", & s);
   strcat(f," ");
   printf(  strcat(f,s));


    return 0;
}
