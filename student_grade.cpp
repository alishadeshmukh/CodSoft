#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100

struct Student {
    char name[50];
    int grade;
};

int main() {
    struct Student students[MAX_STUDENTS];
    int numStudents;

    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    if (numStudents <= 0 || numStudents > MAX_STUDENTS) {
        printf("Invalid number of students.\n");
        return 1;
    }

    for (int i = 0; i < numStudents; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter grade of student %d: ", i + 1);
        scanf("%d", &students[i].grade);
    }

    int totalGrade = 0;
    int highestGrade = students[0].grade;
    int lowestGrade = students[0].grade;

    for (int i = 0; i < numStudents; i++) {
        totalGrade += students[i].grade;

        if (students[i].grade > highestGrade) {
            highestGrade = students[i].grade;
        }

        if (students[i].grade < lowestGrade) {
            lowestGrade = students[i].grade;
        }
    }

    float averageGrade = (float)totalGrade / numStudents;

    printf("\nAverage Grade: %.2f\n", averageGrade);
    printf("Highest Grade: %d\n", highestGrade);
    printf("Lowest Grade: %d\n", lowestGrade);

    return 0;
}