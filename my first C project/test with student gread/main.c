#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

struct Student {
    char name[50];
    float marks[5];
    float average;};

int main() {
    struct Student students[5];

    for (int i = 0; i < 5; i++) {
        printf("%d.Enter student name: ", i + 1);
        scanf("%s", students[i].name);

        printf("Enter marks for student %d (5 subjects): ", i + 1);
        for (int j = 0; j < 5; j++) {
            scanf("%f", &students[i].marks[j]);
        }
    }

    for (int i = 0; i < 5; i++) {
        float sum = 0;
        for (int j = 0; j < 5; j++) {
            sum += students[i].marks[j];
        }
        students[i].average = sum / 5;
    }


    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (students[i].average < students[j].average) {

                struct Student temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }


    printf("\nRank\tName\t\tAverage Marks\n");
    for (int i = 0; i < 5; i++) {
        printf("%d\t%s\t\t%.2f\n", i + 1, students[i].name, students[i].average);
    }

    return 0;
}
