#include <stdio.h>
#include <stdlib.h>

int main()
{
    int myint = 32;
    float myfloat = 6.4;
    double mydouble = 3.12;
    char mychar ='a' ;

    printf("%lu\n",sizeof(myint));
    printf("%lu\n",sizeof(myfloat));
    printf("%lu\n",sizeof(mydouble));
    printf("%lu",sizeof(mychar));
    return 0;
}
