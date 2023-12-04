#include <stdio.h>
#include <stdbool.h>

int main()
{
    int matrix[3][3];
    printf("enter first number:\t");
    scanf("%d",&matrix[0][0]);

    printf("enter second number:\t");
    scanf("%d",&matrix[0][1]);

    printf("enter third number:\t");
    scanf("%d",&matrix[0][2]);

    printf("enter fourth number:\t");
    scanf("%d",&matrix[1][0]);

    printf("enter fifth number:\t");
    scanf("%d",&matrix[1][1]);

    printf("enter sixth number:\t");
    scanf("%d",&matrix[1][2]);


    printf("enter seventh number:\t");
    scanf("%d",&matrix[2][0]);

    printf("enter eighth number:\t");
    scanf("%d",&matrix[2][1]);

    printf("enter ninth number:\t");
    scanf("%d",&matrix[2][2]);

    printf("\n\n");


    int i,j;
    for(i=0; i<3; i++){
        for(j=0; j<3;j++){
            printf("%d ",matrix[i][j]);


        }
        printf("\n");
    }


    printf("\n\n");



        for(j=0; j<3; j++){
        for(i=0; i<3;i++){
            printf("%d ",matrix[i][j]);


        }
         printf("\n");
        }


    return 0;
}


