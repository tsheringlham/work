# include <stdio.h>
#include <stdbool.h>

int main()
{
    int eligibleage = 5;
    int dob = 2017;
    int year = 2023;
    int age = year - dob;

    printf("Age : %d\n",age);
    printf("Eligible for admission:%d",age>eligibleage);

    return 0;
}
