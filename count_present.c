#include <stdio.h>

int countEven(int a[], int n) {
    int c = 0;
    for(int i = 0; i < n; i++)
        if(a[i] % 2 == 0)
            c++;
    return c;
}

int countOdd(int a[], int n) {
    int c = 0;
    for(int i = 0; i < n; i++)
        if(a[i] % 2 != 0)
            c++;
    return c;
}

int main() {
    int a[100], n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Even numbers = %d\n", countEven(a, n));
    printf("Odd numbers = %d", countOdd(a, n));
    return 0;
}
