#include <stdio.h>

main()
{
    int character;
    int numberOfSpecificCharacters = 0;
    while ((character = getchar()) != EOF) {
        if (character == ' ' || character == '\t' || character == '\n') {
            numberOfSpecificCharacters++;
        }
    }
    printf("Number of tabs/spaces/new lines: %d", numberOfSpecificCharacters);
}