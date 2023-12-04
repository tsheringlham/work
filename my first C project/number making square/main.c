#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string .h>



int main()
{   int i=10;
    int start=1;

    do
    {
        int end=start+9;
        int num=start;
    do
    {
        printf("%4d",num);
        num++;

    }while(num<=end);
        printf(" \n");
        start +=10;

    }while(--i>0);

    return 0;
}

