#include <stdio.h>

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number % 2 == 0) {
        printf(" even %d\n", number);
    } else {
        printf("odd %d\n", number);
    }

    return 0;
}
