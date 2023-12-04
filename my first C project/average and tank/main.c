#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    int student = 10;
    int dzo,eng,sci,math,eco,a;
    int numbersubject = 5;
    int total = 0;
    a = 0;
    float average;

    printf("enter the number of students: ");
    scanf("%d", & student);



    while (a<student)
    {
    printf("enter the dzo marks: \n");
    scanf("%d", & dzo);

    printf("enter the eng marks: \n");
    scanf("%d", & eng);

    printf("enter the sci marks: \n");
    scanf("%d", & sci);

    printf("enter the math marks: \n");
    scanf("%d", & math);

    printf("enter the eco marks: \n");
    scanf("%d", & eco);

    total += student;a++;

    printf("\n\n\n");
    }
    average = (float)total/student;
    printf("\n average= %f",average);







    return 0;
}
