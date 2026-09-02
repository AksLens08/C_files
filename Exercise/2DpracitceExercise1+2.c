#include <stdio.h>

void display(int m[100][100], int student, int subject);

int main() {
    int marks[100][100];
    int studentTotal[100];
    float studentAverage[100];
    int allTotal[100];
    int student, subject;

    printf("Enter number of students: ");
    scanf("%d", &student);

    printf("Enter number of subjects: ");
    scanf("%d", &subject);

    printf("Enter marks for %d students in %d subjects:", student, subject);

    // Read marks for each student
    for (int i = 0; i < student; i++) {
        printf("\nStudent %d:\n", i + 1);
        for (int k = 0; k < subject; k++) {
            printf("Subject %d: ", k + 1);
            scanf("%d", &marks[i][k]);
        }
    }

    for (int i = 0; i < student; i++) {
        int sum = 0;
        for (int k = 0; k < subject; k++) {
            sum += marks[i][k];
        }
        studentTotal[i] = sum;
    }

    for (int i = 0; i < student; i++) {
        studentAverage[i] = (float)studentTotal[i] / subject;
    }

    printf("Student\t\tMarks\t\t\tTotal\t\t\t\tAvergae\n");
    printf("----------------------------------------------------\n");

    for (int k = 0; k < student; k++) {
        printf("\nStudent %d: ", k + 1);
        int sum = 0;
        for (int t = 0; t < subject; t++) {
            sum += marks[k][t];
            printf("%d ", marks[k][t]);
        }
        printf("| Total= %d ", studentTotal[k]);
        printf("| Average = %.2f\n", studentAverage[k]);
    }

    for (int k = 0; k < subject; k++) {
        int highestMark = marks[0][k];
        for (int i = 1; i < student; i++) {
            if (marks[i][k] > highestMark) {
                highestMark = marks[i][k];
            }
        }
        printf("\nThe highest marks of Subject %d is %d\n", k + 1, highestMark);
    }

    return 0;
}

void display(int m[100][100], int student, int subject) {
    for (int i = 0; i < student; i++) {
        printf("\nStudent %d:", i + 1);
        for (int k = 0; k < subject; k++) {
            printf("%d ", m[i][k]);
        }
    }
}