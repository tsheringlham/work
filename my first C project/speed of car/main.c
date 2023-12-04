#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int choice;
    float xi,xf,v1,v2,T,intersect;
    float distance,relativespeed,meetingtime,meetingpoint;


    printf("Enter 1 to check the intersection point of two cars coming from two different direction.\n");
    printf("Enter 2 to check the intersection point of two cars going toward same direction.\n");
    printf("Please,enter your choice:\t");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        printf("\n\nEnter the initial position of Car A\t");
        scanf("%f",& xi);
        printf("Enter the final position of Car B\t");
        scanf("%f",& xf);
        printf("\n\nEnter the velocity of car A\t");
        scanf("%f",& v1);
        printf("Enter the velocity of car B\t");
        scanf("%f",& v2);
        T= (xf/(v1+(-v2)));
        printf("\nTime of intersection %.2f hours",T);
        intersect=v1*T;
        printf("\nIntersection point %.2f Km\n",intersect);
        break;
    case 2:
       printf("\nEnter the initial distance between two cars:\t");
       scanf("%f",& distance);
       printf("\nEnter the speed of car A:\t");
       scanf("%f",&v1);
       printf("\nEnter the speed of car B:\t");
       scanf("%f",&v2);
       if(v2>v1)
       {
          relativespeed =v2-v1;
       meetingtime=distance/relativespeed;
       printf("\nTime %f", meetingtime);
       meetingpoint=v1*meetingtime;
       printf("\nIntersection point %f",meetingpoint);

       }else
       {
           printf("They will never meet");
       }

    }
    return 0;
}
