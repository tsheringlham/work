#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    int a = 1;
    int count = 0;

    printf("enter the number:\n");
    while(a>=0)
    {
        scanf("%d", & a);
        count += 1;
    }
    printf("there are positive number :%d",count);







    return 0;
}
