#include <stdio.h>

int main() {
    int grade;
    printf("Enter your grade: ");
    scanf("%d", &grade);
    if (grade < 40) {
        printf("You failed.");
    }
    else {
        printf("You passed.");
    }

    return 0;
}