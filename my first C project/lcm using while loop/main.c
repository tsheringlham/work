#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main()
{    int num1, num2, max;

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    max = num1;
    if (num2 > max) {
        max = num2;
    }

    int temp = max;
    while (1) {
        if (temp % num1 == 0 && temp % num2 == 0) {
            printf("The LCM of %d and %d is %d\n", num1, num2, temp);
            break;
        }
        temp++;
    }

    return 0;
}
