#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int sum1 =0;
    int sum2 = 0;
    printf("enter the number: ");
    scanf("%d",& n);

    for(int i=2; i<=n; i+=2)
    {
        sum1+=i;
    }
    for(int i=1; i<=n; i=i+2)
    {
        sum2+=i;

    }
    printf("\nsum1: %d",sum1);
    printf("\nsum2: %d",sum2);


    return 0;

}
