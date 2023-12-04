#include <stdio.h>
#include <stdbool.h>
#define gravity 9.81 //Acceleration due to gravity
#define pi 3.14


int main()
{
    int choice;

    printf("press 1 to find force\n");
    printf("press 2 to find gravity\n");
    printf("press 3 to find speed\n");
    printf("press 4 to find time period\n\n");
    scanf("%i",& choice);
    float mass,acceleration;
    float length,period;
    float distance,height;

    switch(choice)
    {
    case 1:
        printf("enter the mass in gram\n");
        scanf("%f",& mass );
        printf("enter the acceleration \n");
        scanf("%f",& acceleration);
        float force= (mass*acceleration);// F= ma
        printf("Force= %f",force);
        break;

    case 2:
        printf("Enter mass in gram\n");
        scanf("%f",& mass);
        printf("Enter height in meter\n");
        scanf("%f",& height);
        float Gravity = mass*gravity*height;
        printf("Gravity = %f",Gravity);
        break;
    case 3:
        printf("Enter distance in m\n");
        scanf("%f",& distance);
        printf("Enter time in second\n");
        scanf("%f",& period);

        float Speed =distance/period;
        printf("Speed =%f",Speed);
        break;
    case 4:
        printf("enter length in meter\n");
        scanf("%f",& length);
        float Timeperiod = 2*pi*sqrt(length/gravity);//T=2(pi)*sqrt(L/g)
        printf("Time period = \t%f",Timeperiod);
        break;
    default:
        printf("Invalid");
        break;
    }

    return 0;
}
