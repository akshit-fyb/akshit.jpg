#include <stdio.h>

int main() {
    int n, c = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n == 0) {
        c = 1;
    } else {
        if (n < 0) {
            n = -n;
        }
        while (n > 0) {
            n = n / 10;
            c++;
        }
    }

    printf("Number of digits: %d\n", c);
    return 0;
}
