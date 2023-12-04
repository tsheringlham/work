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

   int matrix1[rows][cols], matrix2[rows][cols],sum[rows][cols];
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


   for(int i=0;i<rows;i++)
   {
       for(int j=0;j<cols;j++)
       {
           sum[i][j]=matrix1[i][j]+matrix2[i][j];
       }
   }
    printf("\n\nAddition of two matrix: \n");
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            printf("%d ",sum[i][j]);
        }
        printf("\n\n");
    }

    return 0;
}

