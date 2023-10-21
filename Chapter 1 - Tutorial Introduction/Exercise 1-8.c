#include <stdio.h>

main () {
    int character;

    while ((character = getchar()) != EOF) {
        if (character == '\t') {
            printf("-->");
        } else if (character == '\b') {
            printf("<--");
        } else {
            putchar(character);
        }
    }
}