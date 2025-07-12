#include <stdio.h>

#define STUDENTS 3
#define SUBJECTS 4

int main() {
    int grades[STUDENTS][SUBJECTS];
    int sum, max;

    // Input
    for (int i = 0; i < STUDENTS; i++) {
        printf("Enter grades for Student %d:\n", i + 1);
        for (int j = 0; j < SUBJECTS; j++) {
            printf("Subject %d: ", j + 1);
            scanf("%d", &grades[i][j]);
        }
    }

    // Processing and Output
    for (int i = 0; i < STUDENTS; i++) {
        sum = 0;
        max = grades[i][0];

        for (int j = 0; j < SUBJECTS; j++) {
            sum += grades[i][j];
            if (grades[i][j] > max) {
                max = grades[i][j];
            }
        }

        float average = sum / (float) SUBJECTS;

        printf("\nStudent %d: Average = %.2f, Highest = %d\n", i + 1, average, max);
    }

    return 0;
}
