#include <stdio.h>

int main() {
    int n;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum = sum + i;
    }

printf("%d %d\n", n, sum);

    return 0;
}
