#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    int a = 2;
    int b = 2;
    int n,m;

    printf(" to prove that if a is odd and b is odd, then a+b will be even\n");
    printf("\n now let's assum: \na=2n+1.....(n= any natural number)\nb=2m+1....(m=any natural number)\n\n\ta+b=(2n+1+2m+1)\n\tb=2(n+m+1)\n\n");

    printf("enter any value for n:  ");
    scanf("%d", & n);
    printf("enter any value for m:  ");
    scanf("%d", & m);

    int ab =(a*n+1)+(b*m+1);
    printf("\n total will be even = %d\n",ab);


    return 0;
}
