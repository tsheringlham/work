#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,sum=0;
    for(i=0; i<=10; i++)
    {
        printf("enter %d numbers: ",i);
        scanf("%d", & j);
        sum+=j;

    }
    printf("%d",sum);

    return 0;
}
