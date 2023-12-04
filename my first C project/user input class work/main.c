#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("enter the number:");
    scanf("%d",& n);

    int i;
    int sum = 0;
    for(i=2; i<=n; i++)
         if(i%2 == 0)
         {
          printf("%d\n",i);
         sum += i;

         }



        printf("sum: %d",sum);

    return 0;
}
