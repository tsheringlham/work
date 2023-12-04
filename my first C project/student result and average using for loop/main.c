#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    int subject[5];
    float average;
    int student[10];
    int dzo,eng,sci,math,eco;
    int rank;


    printf("enter the number of student:");
        scanf("%f",& student);


    int a;
    int total = 0;

    for(a=0;a<10; a++){
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

           total += subject; student;



           average = (float)total/5;
           printf("\n average= %f",average);


           printf("\n\n\n");

    }
    printf("\nRank");
    for (int a= 0; a< 10; a++) {
        printf("%d\t\t%.2f\n", rank);
    }




    return 0;
}
