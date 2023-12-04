#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    int i = 1;
    int a,b;
    printf("enter the number of row:");
    scanf("%d",& a);

    while(i<=a)
    {
        b = 1;
        while(b<=i)
        {
            printf("x");
            b++;
        }
        printf("\n");
        i++;

    }
    return 0;
}
                                                                                                                                                                                                                                                                                                                                                                                                    