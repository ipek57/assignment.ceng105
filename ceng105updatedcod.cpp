#include <stdio.h>

int main() {
    int grade, grade_2, grade_classavg = 57;
    printf("Enter your grade: ");
    scanf("%d", &grade);
    if (grade < 40) {
        printf("You failed.\n");
    }
    else {
        printf("You passed.\n");
    }

    grade_2 = grade;

    if (grade_2 >= 90 && grade_2 <= 100) {
        printf("Your grade is AA\n");
    }
    else if (grade_2 >= 85 && grade_2 <= 89) {
        printf("Your grade is BA\n");
    }
    else if (grade_2 >= 80 && grade_2 <= 84) {
        printf("Your grade is BB\n");
    }
    else if (grade_2 >= 70 && grade_2 <= 79) {
        printf("Your grade is CB\n");
    }
    else if (grade_2 >= 60 && grade_2 <= 69) {
        printf("Your grade is CC\n");
    }
    else if (grade_2 >= 50 && grade_2 <= 59) {
        printf("Your grade is DC\n");
    }
    else if (grade_2 >= 45 && grade_2 <= 49) {
        printf("Your grade is DD\n");
    }
    else if (grade_2 >= 35 && grade_2 <= 44) {
        printf("Your grade is FD\n");
    }
    else if (grade_2 >= 0 && grade_2 <= 34) {
        printf("Your grade is FF\n");
    }

    if (grade_classavg <= grade_2) {
        printf("Your grade average is higher then class (57)");
    }
    else if (grade_classavg > grade_2) {
        printf("Your grade average is lower then class (57)");
    }
    return 0;
}