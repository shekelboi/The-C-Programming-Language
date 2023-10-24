#include <stdio.h>
#include <stdbool.h>

// Revised word counter program
// Only character sequences that start with an English letter count as a word

bool isBlank(int character) {
    return character == ' ' || character == '\t' || character == '\n';
}

bool isLetter(int character) {
    return ('A' <= character && character <= 'Z') || ('a' <= character && character <= 'z');
}

main() {
    int character;
    int wordCount = 0;
    bool inWord = false;
    bool skipSequence = false; // Skip sequence if it starts with a non-letter character

    while ((character = getchar()) != EOF) {
        if (inWord && isBlank(character)) {
            skipSequence = false;
            inWord = false;
        } else if (!inWord && isLetter(character) && !skipSequence) {
            inWord = true;
            wordCount++;
        } else if (!inWord && !isLetter(character)) {
            skipSequence = true;
        }
    }
    printf("The number of words is: %d", wordCount);
}