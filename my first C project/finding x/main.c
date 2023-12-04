#include <stdio.h>
#include <stdbool.h>

int main()
{
    float people;
    float days;
    float manpower;
    float daystaken;

    printf("Enter no.of people working:\n ");
    scanf("%f",& people);

    printf("days taken to complete the work :\n");
    scanf("%f",& days);

    printf("enter people working:\n");
    scanf("%f",& manpower);
    daystaken = (days*people)/manpower;
    printf("the days taken to complete the work is %.2f",daystaken);

    return 0;
}
