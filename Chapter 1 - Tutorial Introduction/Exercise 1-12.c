#include <stdio.h>
#include <stdbool.h>

bool isBlank(int character) {
    return character == ' ' || character == '\t' || character == '\n';
}

// Count the length of the words

main ()
{
    int character;
    bool inWord = false;
    int wordLength = 0;
    while ((character = getchar()) != EOF) {
        if (!inWord && !isBlank(character)) {
            inWord = true;
        } else if (inWord && isBlank(character)) {
            printf(": %d letters\n", wordLength);
            inWord = false;
            wordLength = 0;
        }

        if (inWord) {
            wordLength++;
        }

        if (!isBlank(character)) {
            putchar(character);
        }
    }
}