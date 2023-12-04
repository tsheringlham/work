#include <stdio.h>
#include <stdbool.h>

int main()
{
  int A1,A2,A3,A4;
  int B1,B2,B3,B4;

  printf("Enter the binary number A1:\t\n");
  scanf("%d",&A1);
  printf("Enter the binary number A2:\t\n");
  scanf("%d",& A2);
  printf("Enter the binary number A3:\t\n");
  scanf("%d",& A3);
  printf("Enter the binary number A4:\t\n");
  scanf("%d",& A4);
   printf("Enter the binary number B1:\t\n");
  scanf("%d",& B1);
   printf("Enter the binary number B2:\t\n");
  scanf("%d",& B2);
   printf("Enter the binary number B3:\t\n");
  scanf("%d",& B3);
   printf("Enter the binary number B4:\t\n");
  scanf("%d",& B4);

  int O1= A1*B1;
  int O2= A2*B2;
  int O3= A3*B3;
  int O4= A4*B4;

  printf("A1 and B1:\t%d\n",O1);
  printf("A2 and B2:\t%d\n",O2);
  printf("A3 and B3:\t%d\n",O3);
  printf("A4 and B4:\t%d\n",O4);


    return 0;
}
