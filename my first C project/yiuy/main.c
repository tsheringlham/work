#include <stdio.h>
#include <string.h>

int main() {
    char inputString[100];  // Assuming the input string will have a maximum length of 100 characters

    printf("Enter a string: ");
    scanf("%[^\n]", inputString);  // Read a string with spaces

    int length = strlen(inputString);  // Calculate the length of the string

    printf("Length of the string: %d\n", length);

    if (length <= 10) {
        printf("The string is short.\n");
    } else if (length <= 20) {
        printf("The string is of medium length.\n");
    } else {
        printf("The string is long.\n");
    }

    return 0;
}
