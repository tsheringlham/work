# include <stdio.h>
# include <stdbool.h>

int main()
{
    int x;
    int r;
    printf("enter the value x:\n");
    scanf("%d", & x);

    r = x%2;
    printf("%d\n",r);

    if (r==0)
    {
        printf("Even");
    }else if(r ==1)
    {
        printf("Odd");
    }
    return 0;
}
