#include <stdio.h>
#include <string.h>

int main() {
    char sentence[100], letter;
    int position, total = 0;

    printf("Type a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    printf("Which letter do you want to count? ");
    scanf("%c", &letter);

    for (position = 0; sentence[position] != '\0'; position++) {
        if (sentence[position] == letter) {
            total++;
        }
    }

    printf("The letter '%c' appears %d times.\n", letter, total);

    return 0;
}
