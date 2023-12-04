#include <stdio.h>
#include <stdbool.h>

int main()
{
    int num,i,prime=1;
    printf("Enter a positive integer:\n");
    scanf("%d",& num);
    if (num<=1)
    {
        prime=0;
    }else
    {
        for(i=2;i<=num-1;++i)
        {
            if(num %i==0)
            {
                prime=0;
                break;
            }
        }

    }if(prime)
    {
        printf("%d is a prime number.\n",num);
    }else
    {
        printf("%d is not a prime number.\n",num);
    }
    return 0;
}
