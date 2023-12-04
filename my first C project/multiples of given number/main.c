#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    int number;

    printf("enter the number:");
    scanf("%d", & number);

    int a,multiple;
    for(a=1; a<=100;a++){
        multiple = number * a;
        printf("%d*%d = %d\n",number,a,multiple);
    }


    return 0;
}
