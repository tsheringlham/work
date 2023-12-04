#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main()
{   struct Student {
    int studentNumber;
    float marks[5];
    float average;
    int rank;
    };

    struct Student students[10];

    for (int i = 0; i < 10; i++) {
        students[i].studentNumber = i + 1;
        printf("Enter marks for student %d (5 subjects):\n", students[i].studentNumber);
        for (int j = 0; j < 5; j++) {
            scanf("%f", &students[i].marks[j]);
        }
    }

    for (int i = 0; i < 10; i++) {
        float totalMarks = 0;
        for (int j = 0; j < 5; j++) {
            totalMarks += students[i].marks[j];
        }
        students[i].average = totalMarks / 5;
        students[i].rank = 1;
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (students[i].average < students[j].average) {
                students[i].rank++;
            }
        }
    }

    printf("\nRank\tStudent Number\tAverage\n");
    for (int i = 0; i < 10; i++) {
        printf("%d\t\t%d\t\t%.2f\n", students[i].rank, students[i].studentNumber, students[i].average);
    }

    return 0;
}
