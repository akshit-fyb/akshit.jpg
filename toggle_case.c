#include <stdio.h>
#include <ctype.h>

int main() {
    char text[100];
    int i = 0;

    printf("Enter a string: ");
    gets(text);

    while (text[i] != '\0') {
        if (islower(text[i])) {
            text[i] = toupper(text[i]);
        } else if (isupper(text[i])) {
            text[i] = tolower(text[i]);
        }
        i++;
    }

    printf("String after toggling case: %s", text);

    return 0;
}
