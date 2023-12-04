#include <stdio.h>
#include <stdbool.h>

int main()
{
   int A[2][2];
   int B[2][2];
   printf("Enter the first number in first matrix:\t");
   scanf("%d",& A[0][0]);
   printf("Enter the second number in first matrix:\t");
   scanf("%d",& A[0][1]);
   printf("Enter the third number in first matrix:\t");
   scanf("%d",& A[1][0]);
   printf("Enter the fourth number in first matrix:\t");
   scanf("%d",& A[1][1]);
   printf("Enter the first number in second matrix:\t");
   scanf("%d",& B[0][0]);
   printf("Enter the second number in second matrix:\t");
   scanf("%d",& B[0][1]);
   printf("Enter the third number in second matrix:\t");
   scanf("%d",& B[1][0]);
   printf("Enter the fourth number in second matrix:\t");
   scanf("%d",& B[1][1]);

   printf("\n\n\t COLUMN1\t COLUMN2\n ROW1\t  %d\t\t   %d\n ROW2\t  %d\t\t   %d\n",A[0][0],A[0][1],A[1][0],A[1][1]);

   printf("\n\n\t COLUMN1\t COLUMN2\n ROW1\t  %d\t\t   %d\n ROW2\t  %d\t\t   %d\n",B[0][0],B[0][1],B[1][0],B[1][1]);

   float C1=(A[0][0]*B[0][0]+A[0][1]*B[1][0]);
   float C2=(A[0][0]*B[0][1]+A[0][1]*B[1][1]);
   float C3=(A[1][0]*B[0][0]+A[1][1]*B[1][0]);
   float C4=(A[1][0]*B[0][1]+A[1][1]*B[1][1]);

   printf("\n Answer:\n\n\t COLUMN1\t  COLUMN2\n ROW1\t  %.2f \t  %.2f\n ROW2\t  %.2f \t  %.2f\n\n",C1,C2,C3,C4);
    return 0;
}
