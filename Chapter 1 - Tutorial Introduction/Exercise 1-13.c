#include <stdio.h>

// Converts the input to lower case

int lower(int character) {
    if (character >= 65 && character <= 90) {
        return character + 32;
    }
    return character;
}

main() {
    int character;

    while ((character = getchar()) != EOF)
    {
        printf("%c", lower(character));
    }
    
}