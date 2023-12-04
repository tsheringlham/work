#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    int a = 2;
    int b = 2;
    int n,m;

    printf(" to prove that if a is even and b is even, then a+b will be even\n");
    printf("\n now let's assum: \na=2n.....(n= any natural number)\nb=2m....(m=any natural number)\n\n\ta+b=2n+2m\n\t+b=2(n+m)\n\n");

    printf("enter any value for n:  ");
    scanf("%d", & n);
    printf("enter any value for m:  ");
    scanf("%d", & m);

    int ab =(a*b)+(b*m);
    printf("\n total will be even = %d\n",ab);


    return 0;
}
