#include <stdio.h>
#define MAX_LENGTH 5000

main() {
    char currentLine[MAX_LENGTH];
    int length;
    while((length = get_line(currentLine)) != 0) {
        if (length > 80) {
            printf("%s, with a length of %d\n", currentLine, length);
        }
    }
}

get_line(char currentLine[]) {
    int counter = 0;
    int c;

    while ((c = getchar()) != EOF && c != '\n') {
        if (counter < (MAX_LENGTH - 1)) {
            currentLine[counter] = c;
        } 
        counter++;
    }

    currentLine[counter < MAX_LENGTH ? counter: MAX_LENGTH - 1] = '\0';
    return counter;
}