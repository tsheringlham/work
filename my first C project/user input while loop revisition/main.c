#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    int num;

    int sum;

    printf("enter the number you like: ");
    scanf("%d", &num);

     int i;
    for(i=0; i<=num; i++)

    {

        printf("%d\n",i);
        sum+=i;



    }printf("\nsum:%d",sum);

    return 0;
}
