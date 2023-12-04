#include <stdio.h>
#include <stdbool.h>

int main ()
{
    float eng,dzo,math,sci;
    printf("Enter your English mark:\n");
    scanf("%f",& eng);
    printf("Enter your Dzongkha mark:\n");
    scanf("%f",& dzo);
    printf("Enter your Math mark:\n");
    scanf("%f",& math);
    printf("Enter your Science mark:\n");
    scanf("%f",& sci);

    float E;
    printf("Your English point is :\t");
    if(eng>=90)
    {
        E=5;
        printf("5 Points\n");
    }
    else if(eng>=80)
    {
        E=4;
        printf("4 Points\n");
    }
    else if (eng>=70)
    {
        E=3;
        printf("3 Points\n");
    }
    else if(eng>=60)
    {
        E=2;
        printf("2 Points\n");
    }
    else if(eng<60)
    {
        E=1;
        printf("1 Points\n");
    }
    else{printf("Must work hard\n");}

    float D;
    printf("Your Dzongkha point is :\t");
    if(dzo>=90)
    {
       D=5;
        printf("5 Points\n");
    }
    else if(dzo>=80)
    {
        D=4;
        printf("4 Points\n");
    }
    else if (dzo>=70)
    {
        D=3;
        printf("3 Points\n");
    }
    else if(dzo>=60)
    {
       D=2;
        printf("2 Points\n");
    }
    else if(dzo<60)
    {
        D=1;
        printf("1 Points\n");
    }
    else{printf("Must work hard\n");}

    float M;
    printf("Your Mathematics point is :\t");
    if(math>=90)
    {
       M=5;
        printf("5 Points\n");
    }
    else if(math>=80)
    {
        M=4;
        printf("4 Points\n");
    }
    else if (math>=70)
    {
        M=3;
        printf("3 Points\n");
    }
    else if(math>=60)
    {
        M=2;
        printf("2 Points\n");
    }
    else if(math<60)
    {
        M=1;
        printf("1 Points\n");
    }
    else{printf("Must work hard\n");}

    float S;
    printf("Your Science point is:\t");
    if(sci>=90)
    {
       S=5;
        printf("5 Points\n");
    }
    else if(sci>=80)
    {
        S=4;
        printf("4 Points\n");
    }
    else if (sci>=70)
    {
        S=3;
        printf("3 Points\n");
    }
    else if(sci>=60)
    {
        S=2;
        printf("2 Points\n");
    }
    else if(sci<60)
    {
        S=1;
        printf("1 Points\n");
    }
    else{printf("Must work hard\n");}

    float average = (E+D+M+S)/4;
    printf("Your average point is %f \n",average);

    if(average>=5)
    {
        printf("Your grade is A\n");
    }
    else if(average>=4)
    {
        printf("Your grade is B\n");
    }
    else if(average>=3)
    {
        printf("Your grade is C\n");
    }
    else
    {
        printf("Your grade is D\n");
    }

    return 0;
}
