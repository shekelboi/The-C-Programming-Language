#include <stdio.h>
#include <stdbool.h>

main() {
    int character;
    bool previousWasBlank = false;

    while ((character = getchar()) != EOF) {
        if (!previousWasBlank || character != ' ') {
            putchar(character);
        }

        if (character == ' ') {
            previousWasBlank = true;
        }
        else {
            previousWasBlank = false;
        }
    }
}