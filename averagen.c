#include <stdio.h>

float findAverage(int a[], int n) {
    int sum = 0;
    for(int i = 0; i < n; i++)
        sum += a[i];
    return (float)sum / n;
}

int main() {
    int a[100], n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Average = %.2f", findAverage(a, n));
    return 0;
}
