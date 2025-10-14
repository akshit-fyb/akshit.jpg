#include <stdio.h>

int findMax(int a[], int n) {
    int max = a[0];
    for(int i = 1; i < n; i++)
        if(a[i] > max) max = a[i];
    return max;
}

int findMin(int a[], int n) {
    int min = a[0];
    for(int i = 1; i < n; i++)
        if(a[i] < min) min = a[i];
    return min;
}

int main() {
    int a[100], n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Maximum = %d\n", findMax(a, n));
    printf("Minimum = %d", findMin(a, n));
    return 0;
}
