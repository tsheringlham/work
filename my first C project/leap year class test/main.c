#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year;

    printf("enter the year: ");
    scanf("%d",& year);

    if(year%4==0)
    {
        printf("its leap year");
    }
    else
    {
        printf("it not leap year");
    }

    return 0;
}
