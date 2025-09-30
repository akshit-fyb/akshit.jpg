#include <stdio.h>

int main() {
    int n1, n2, result;
    char op, again;

    do {
        printf("Enter first number: ");
        scanf("%d", &n1);
        
        printf("Enter second number: ");
        scanf("%d", &n2);

        printf("Enter operator (+ - * /): ");
        scanf(" %c", &op);

        if (op == '+') result = n1 + n2;
        else if (op == '-') result = n1 - n2;
        else if (op == '*') result = n1 * n2;
        else if (op == '/') result = n1 / n2; 

        printf("Answer = %d\n", result);

        printf("Continue? (y/n): ");
        scanf(" %c", &again);

    } while (again == 'y' || again == 'Y');

    printf("Bye!\n");
    return 0;
}
