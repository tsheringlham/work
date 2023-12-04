#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    int a1,a2,a3,b1,b2,b3,c1,c2,c3,a,b,c;
    printf("enter the coefficients x,y,z and constant for equ1:\n");
    scanf("%d %d %d %d", &a1,&a2,&a3,&a);

    printf("enter the coefficients x,y,z and constant for equ2:\n");
    scanf("%d %d %d %d", &b1,&b2,&b3,&b);

    printf("enter the coefficients x,y,z and constant for equ3:\n");
    scanf("%d %d %d %d", &c1,&c2,&c3,&c);

    printf("\n%dx\t%dy\t%dz\t%d......eqution1",a1,a2,a3,a);
    printf("\n%dx\t%dy\t%dz\t%d......eqution2",b1,b2,b3,b);
    printf("\n%dx\t%dy\t%dz\t%d......eqution3",c1,c2,c3,c);


    printf("\n\n\n%d\t%d\t%d\t\t[x]\t=\t%d",a1,a2,a3,a);
    printf("\n%d\t%d\t%d\tx\t[y]\t=\t%d",b1,b2,b3,b);
    printf("\n%d\t%d\t%d\t\t[z]\t=\t%d",c1,c2,c3,c);

    int det;
    det = ((a1*(b2*c3-c2*b3))-(a2*(b1*c3-c1*b3))+(a3*(b1*c2-c1*b2)));
    printf("\n\n\n\n determinant: %d",det);


    int f1,f2,f3,f4,f5,f6,f7,f8,f9;
    f1=(b2*c3-c2*b3)*1;
    f2=(b1*c3-c1*b3)*-1;
    f3=(b1*c2-c1*b2)*1;
    f4=(a2*c3-c2*a3)*-1;
    f5=(a1*c3-c1*a3)*1;
    f6=(a1*c2-c1*a2)*-1;
    f7=(a2*b3-b2*a3)*1;
    f8=(a1*b3-b1*a3)*-1;
    f9=(a1*b2-b1*a2)*1;

    printf("\n\ncofactors");

    printf("\n\n%d %d %d",f1,f2,f3,a);
    printf("\n%d %d %d ",f4,f5,f6,b);
    printf("\n%d %d %d",f7,f8,f9,c);


    printf("\n\n\n(adjoin) transforce");

    printf("\n\n%d %d %d",f1,f4,f7,a);
    printf("\n%d %d %d ",f2,f5,f8,b);
    printf("\n%d %d %d",f3,f6,f9,c);

    printf("\n\n A-1 = 1/|A| * adj(A)");

    printf("\n\n%d/%d\t%d/%d\t%d/%d ",f1,det,f4,det,f7,det);
    printf("\n%d/%d\t%d/%d\t%d/%d ",f2,det,f5,det,f8,det);
    printf("\n%d/%d\t%d/%d\t%d/%d ",f3,det,f6,det,f9,det);

    int d1,d2,d3,d4,d5,d6,d7,d8,d9;

    d1=f1*a; d2=f4*b; d3=f7*c;
    d4=f2*a; d5=f5*b; d6=f8*c;
    d7=f3*a; d8=f6*b; d9=f9*c;

    printf("\n\n\n(%d\t%d\t%d)/%d",d1,d2,d3,det);
    printf("\n(%d\t%d\t%d)/%d",d4,d5,d6,det);
    printf("\n(%d\t%d\t%d)/%d",d7,d8,d9,det);


    int x,y,z;
    x = (d1+d2+d3)/det;
    y = (d4+d5+d6)/det;
    z = (d7+d8+d9)/det;

    printf("\n\n value of x,y,z is:");
    printf("\nx = %d",x);
    printf("\ny = %d",y);
    printf("\nz = %d",z);











    return 0;
}
