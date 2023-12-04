#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    int choice;
    float slide, radius, height;
    const float pi = 3.14;

    printf("choose the shape:\n");
    printf("1. for triangle:\n");
    printf("2. for square:\n");
    printf("3. for spheres:\n");
    printf("4. for corn:\n");
    printf("enter your choice (1,2,3,4):");
    scanf("%d",&choice);

    switch(choice){
    case 1:
        {   double side,hight;
            printf("enter the length :");
            scanf("%f",&side);
            printf("enter the hight:");
            scanf("%f",&hight);
            printf("volume of the triangle is: %.2f\n",0.5*side*height);
            break;
        }
        case 2:
        {
            double side;
            printf("enter the side :");
            scanf("%f",& side);
            printf("volume of the square is: %.2f\n",side*side*side);
            break;


        }
        case 3:
            {
                 double side;
                 printf("enter the radius :");
                 scanf("%f",& side);
                 printf("volume of the sphere is: %.2f\n",(4.0/3.0)*pi*pow(radius,3));
                 break;

            }
        case 4:
            {
                double side,hight;
                printf("enter the radius :");
                scanf("%f",& radius);
                printf("enter the hight :");
                scanf("%f",& hight);
                printf("volume of the cone is: %.2f\n",(1.0/3.0)*pi*pow(radius,2)*height);
                break;
            }




    }



    return 0;
}
