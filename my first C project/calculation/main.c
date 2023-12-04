# include <stdio.h>
# include <stdbool.h>

int main()
{
    int A , B;
    int product;

    printf("Enter the value A :\n");
    scanf("%d", & A);
    printf("Enter the value B :\n");
    scanf("%d", & B);
    product = (A+B)*(A+B);
    printf("PRODUCT = %d",product);

    return 0;
}

