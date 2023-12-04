#include <stdio.h>
#include <stdbool.h>

int main()
{
     int det[3][3];
    printf("enter first number:\t");
    scanf("%d",&det[0][0]);
    printf("enter second number:\t");
    scanf("%d",&det[0][1]);
    printf("enter third number:\t");
    scanf("%d",&det[0][2]);
    printf("enter fourth number:\t");
    scanf("%d",&det[1][0]);
    printf("enter fifth number:\t");
    scanf("%d",&det[1][1]);
    printf("enter sixth number:\t");
    scanf("%d",&det[1][2]);
    printf("enter seventh number:\t");
    scanf("%d",&det[2][0]);
    printf("enter eighth number:\t");
    scanf("%d",&det[2][1]);
    printf("enter ninth number:\t");
    scanf("%d",&det[2][2]);


    printf(" \n\tcolumn1\tcolumn2\tcolumn3\n  row1     %d\t%d\t%d\n row2     %d\t%d\t%d\n row3    %d\t%d\t%d\n",det[0][0],det[0][1],det[0][2],det[1][0],det[1][1],det[1][2],det[2][0],det[2][1],det[2][2]);


    float det1 =(det[0][0]*(det[1][1]*det[2][2]-det[2][1]*det[1][2]));
    float det2 =(det[0][1]*(det[1][0]*det[2][2]-det[2][0]*det[1][2]));
    float det3 =(det[0][2]*(det[1][0]*det[2][1]-det[2][0]*det[1][1]));
    float ans= ((det1-det2)+det3);
    printf("%.2f",ans);
    return 0;
}
