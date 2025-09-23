#include <stdio.h>

int main() {
    int marks;

    printf("Enter marks ");
    scanf("%d", &marks);

    if (marks < 0 || marks > 100) {
        printf("Invalid \n");
    }
    else if (marks >= 90 && marks <= 100) {
        printf("Grade A\n");
    }
    else if (marks >= 75 && marks <= 89) {
        printf("Grade B\n");
    }
    else if (marks >= 50 && marks <= 74) {
        printf("Grade C\n");
    }
    else { 
        printf("Grade F\n");
    }

    return 0;
}
