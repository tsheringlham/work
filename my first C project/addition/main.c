#include <stdio.h>

int main()
{
    int x = 5;
    int y = 3;
    int a = x==y;
    int b = x!=y;
    int c = x>=y;
    int d = x<=y;
    int e = x>y;
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",c);
    printf("%d\n",d);
    printf("%d",e);
    return 0;
}
