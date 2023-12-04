#include <stdio.h>
#include <stdbool.h>

int main()
{
    int matrix[2][3]={{1,4,2},{3,6,8}};

    printf("           \t COLUMN 0\tCOLUMN 1\tCOLUMN 2 \t\n ROW 0 \t\t %d  \t\t %d  \t\t %d\n ROW 1 \t\t %d  \t\t %d \t\t %d\n",matrix[0][0],matrix[0][1],matrix[0][2],matrix[1][0],matrix[1][1],matrix[1][2]);
    return 0;
}
