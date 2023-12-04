#include <stdio.h>
#include <stdbool.h>

int main()
{


   int f,s,t,fr;
   printf("enter the element in first row of first column:\n");
   scanf("%d",& f);
   printf("enter the element in first row of second column:\n");
   scanf("%d",& s);
   printf("enter the element in second row of first column:\n");
   scanf("%d",& t);
   printf("enter the element in second row of first column:\n");
   scanf("%d",& fr);

   int matrix[2][2]={{f,s},{t,fr}};
   printf("\t    column1\t column 2 \n\nrow1     \t%d  \t   %d \n\nrow2         \t%d  \t   %d\n\n",matrix[0][0],matrix[0][1],matrix[1][0],matrix[1][1]);

   int pro =(f*fr)-(s*t);
   printf("....Answer = %d",pro);
    return 0;
}
