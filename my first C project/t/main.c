#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main()
{   char u[100];
    float cm,m;
    int year;
    char FN[30],SN[30];

    printf("1. to find string length\n");
    printf("2. to convert cm to meter\n");
    printf("3. to calculate age\n");
    printf("4. to combine first and second name\n");


    int choice;
    scanf("%d", &choice);

    switch (choice) {
        case 1:
        printf("Enter a string: ");
        scanf("%s", u);

        int length = 0;
        while (u[length] != '\0') {
        length++;
    }

        printf("Length of the entered string: %d\n", length);
            break;
        case 2:
            printf("Enter cm: ");
            scanf("%f", &cm);
            m= cm / 100;
            printf("Meter: %.2f\n",m);
            break;
        case 3:
            printf("Enter the year your born: ");
            scanf("%d", &year);
            int age = 2023 - year;
            printf("Age: %d\n", age);
            break;
        case 4:
            printf("Enter your first name: ");
            scanf("%s", FN);
            printf("Enter your second name: ");
            scanf("%s", SN);
            strcat(FN, " ");
            strcat(FN, SN);
            printf("Full name: %s\n", FN);
        default:
            printf("Invalid choice\n");
            break;
    }

    return 0;
}
