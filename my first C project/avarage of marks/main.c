#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    int marks;
    float average;
    printf("enter the marks:");
        scanf("%f",& marks);


    int a;
    int total;

    for(a=1;a<=10; a++){
        total = (a+marks);
        average = (total/10);
        printf("average:%.2f\n", average);


    }



    return 0;
}
