#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    int matrix[3][3];
    int det1,det2;


    printf("enter the matrix a1: ");
    scanf("%d",& matrix[0][0]);

    printf("enter the matrix a2: ");
    scanf("%d",& matrix[0][1]);

    printf("enter the matrix a3: ");
    scanf("%d", & matrix[0][2]);

    printf("enter the matrix b1: ");
    scanf("%d",& matrix[1][0]);

    printf("enter the matrix b2: ");
    scanf("%d",& matrix[1][1]);

    printf("enter the matrix b3: ");
    scanf("%d", & matrix[1][2]);

    printf("enter the matrix c1: ");
    scanf("%d",& matrix[2][0]);

    printf("enter the matrix c2: ");
    scanf("%d",& matrix[2][1]);

    printf("enter the matrix c3: ");
    scanf("%d", & matrix[2][2]);




   int i,j;
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
                printf("%d  ",matrix[i][j]);
    }
    printf("\n");
    }
    printf("\n\n");

   for(j=0; j<3; j++){
    for(i=0; i<3; i++){
        printf("%d  ",matrix[j][i]);
    }printf("\n");
   }
   int




    return 0;
}
