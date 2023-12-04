#include <stdio.h>
#include <stdbool.h>

int main()
{
    int x;
    int y;

    printf("enter the value x:\n");
    scanf("%d",& x);
    printf("enter the value y:\n");
    scanf("%d",& y);

    if(x>y)
    {
        printf("%d is greater than %d",x,y);
    }else if(x<y)
    {
        printf("%d is lesser than %d",x,y);
    }else
    {
        printf("they are equal",x,y);
    }
    return 0;
}
