#include <stdio.h>
#include <string.h>

int main()
{
   char m[]="Hello";
   char n[]="Hello";
   char o[]="HOllow";
   printf("%d\n",strcmp(m,n));

   printf("%d",strcmp(m,o));
    return 0;
}
