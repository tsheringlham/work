#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    int i;

    printf("enter the number of row:");
    scanf("%d",& i);
    int x = i;

    do
    {
        int count = x;
        do
        {
            printf("x");
            count --;
        }
        while(count >= 1);
        printf("\n");
        x--;
    }
    while(x>=1);


    return 0;
}
