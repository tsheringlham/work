#include <stdio.h>
#include <stdbool.h>

int main()
{
   int n,m;
   for(n=1;n<=3;++n)
   {
       printf("outer:%d\n",n);

   for(m=1;m<=5;++m)
   {
       printf("inner:%d\n",m);
   }
    return 0;
}
}
