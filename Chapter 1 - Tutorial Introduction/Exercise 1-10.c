#include <stdio.h>
#include <stdbool.h>

// Count words per line

main() {
    int character;
    bool inWord = false;
    int numberOfWords = 0;
    while ((character = getchar()) != EOF) {
        if (character == ' ' || character == '\t' || character == '\n') {
            if (inWord) {
                numberOfWords++;
            }            
            inWord = false;
        } else {
            inWord = true;
        }
        
        if (character == '\n')
        {
            printf("This line contained %d words\n", numberOfWords);
            numberOfWords = 0;
        }
        
    }
}