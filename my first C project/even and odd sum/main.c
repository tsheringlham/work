#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, even_sum = 0, odd_sum = 0;

    printf("enter the number: ",& num);
    printf(" even number upto %d are: ",num);

    for(int i=o; i<=0; i++)
    {
        if(i%2==0)
        {
            printf("%d",i);
            even_sum+=i;
        }
        printf("odd number up to %d",num);
        for(int i =0; i<=0; i++)
        {
            if(i%2!=0)
            {
                printf("%d",i);
                odd_sum+=i;
            }
        }
        printf("sum of even: %d",even_sum);
        printf("sum of odd: %d",odd_sum);
    }
    return 0;
}
