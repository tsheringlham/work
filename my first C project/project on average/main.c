#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    int count,score;
    float average;
    count = 0;
    int subjectmarks= 10;
    int total = 0;

    while(count<subjectmarks)
    {
        printf("\n enter  a test score: ");
        scanf("%d",&score);
        total += score; count++;
        }


        average = (float)total/subjectmarks;
        printf("\n average= %f",average);



    return 0;
}
