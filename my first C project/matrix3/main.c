#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    int matrix[3][3] = {{1,4,2,},{3,6,8,},{2,3,4}};
    printf("\tcolumn0\tcolumn1\tcolumn2");
    int i,j;
    for(i=0; i<3; i++){
            printf("\nRow0%d",i);
        for(j=0; j<3;  j++){

            printf("\t  %d   ",matrix[i][j]);


            }printf("\n\n   ");
    }
    printf("%d", matrix[1][2]);



    return 0;
}
