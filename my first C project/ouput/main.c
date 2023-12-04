#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    int i = 1;
    do
    {
        int count = 1;
        do
        {
            printf("x");
            count++;
        }
        while(count<=i);
        printf("\n");
        i++;
    }
    while(i<=10);

    return 0;
}
