#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main()
{

    int num,a=0,b,m,q,i;
    printf("Enter the numbers: ");
    scanf("%d",&num);
    m=num;
    while(m!=0)
    {
        m=m/10;
        ++i;
    }
    m=num;
    while(m>0)
    {
        b=m%10;
        a=a+pow(b,i);
        m=m/10;
    }
    if(a==num)
    {
        printf("%d is an Armstrong number.\n",num);

    }else
    {
        printf("%d is not an Armstrong numbers\n",num);
    }


}
