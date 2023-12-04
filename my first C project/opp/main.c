#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    int i = 15;
    do
    {
        int count = i;
        do
        {
            printf("x");
            count--;
        }
        while(count>=1);
        printf("\n");
        i--;
    }
    while(i>=1);

    return 0;
}
