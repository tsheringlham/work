#include <stdio.h>
#include <string.h>

int main()
{
    char x[100];
    int y;
    printf("write any sentence\t");
    scanf("%[^\n]",x);
    y=strlen(x);
    printf("%d",y);
    return 0;
}
