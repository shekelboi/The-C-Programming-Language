#include <stdio.h>
#define MAX_LENGTH 50

// Print the longest line (as much of it as possible if it exceeds MAX_LENGTH) and its length

main() {
    char currentLine[MAX_LENGTH];
    char longestLine[MAX_LENGTH];
    int currentLength = 0;
    int maxLength = 0;

    while ((currentLength = get_line(currentLine)) != 0) {

        if (currentLength > maxLength) {
            maxLength = currentLength;
            for (int i = 0; i < maxLength; i++)
            {
                longestLine[i] = currentLine[i];
            }
        }
    }

    if (maxLength == 0) {
        printf("No line was entered.");
    } else {
        printf("The longest line was \"%s", longestLine);

        if (maxLength >= MAX_LENGTH) {
            printf("...");
        }

        printf("\", with a length of %d", maxLength);
    }
}

get_line(char currentLine[]) {
    int counter = 0;
    int c;

    while ((c = getchar()) != EOF && c != '\n')
    {
        if (counter < MAX_LENGTH - 1) {
            currentLine[counter++] = c;
        } else {
            counter++;
        }
    }

    currentLine[counter < MAX_LENGTH ? counter: MAX_LENGTH - 1] = '\0';
    return counter;   
}