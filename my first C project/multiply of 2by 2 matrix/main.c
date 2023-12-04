#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main()
{
   int rows,cols;

   printf("Enter the number of rows for first matrix : ");
   scanf("%d",&rows);
   printf("Enter the number of column for first matrix  : ");
   scanf("%d",&cols);

   int matrix1[rows][cols], matrix2[rows][cols];
   printf("\nEnter the elements in matrix 1:\n");

   for (int i=0;i<rows;i++)
   {
       for(int j=0;j<cols;j++)
       {
           scanf("%d",&matrix1[i][j]);
       }
   }
   printf("\nMatrix 1:\n");

   for(int i=0;i<rows;i++)
   {
       for(int j=0;j<cols;j++)
       {
           printf("%d  ",matrix1[i][j]);
       }
       printf("\n\n");
   }



   printf("\nEnter element in matrix 2: \n");
   for (int i=0;i<rows;i++)
   {
       for(int j=0;j<cols;j++)
       {
           scanf("%d",&matrix2[i][j]);
       }
   }
   printf("\nMatrix 2:\n");

   for(int i=0;i<rows;i++)
   {
       for(int j=0;j<cols;j++)
       {
           printf("%d  ",matrix2[i][j]);
       }
       printf("\n");
   }


   int a,b,c,d;
   a = (matrix1[0][0]*matrix2[0][0])+(matrix1[0][1]*matrix2[1][0]);
   b = (matrix1[0][0]*matrix2[0][1])+(matrix1[0][1]*matrix2[1][1]);
   c = (matrix1[1][0]*matrix2[0][0])+(matrix1[1][1]*matrix2[1][0]);
   d = (matrix1[1][0]*matrix2[0][1])+(matrix1[1][1]*matrix2[1][1]);

   printf("\n\n%d\t%d",a,b);
   printf("\n%d\t%d",c,d);


    return 0;
}

