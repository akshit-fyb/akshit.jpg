#include <stdio.h>

void reverse(int a[], int n) {
    int i, temp;
    for(i = 0; i < n/2; i++) {
        temp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = temp;
    }
}

int main() {
    int a[100], n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    reverse(a, n);
    printf("Reversed array: ");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}
