#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    int num, sum = 0;
    printf("enter the two digits number: ");
    scanf("%d",& num);
    while(num>0)
    {
        sum += num%10;
        num/=10;
    }
    printf("\nthe sum of the digits is %d",sum);

    return 0;
}
