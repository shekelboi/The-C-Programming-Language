#include <stdio.h>
#define MAX_LENGTH 5000

main() {
    char currentLine[MAX_LENGTH];

    int lineSize = 0;

    while ((lineSize = get_line(currentLine)) > 0) {
        reverse_line(currentLine, lineSize);
        printf("%s\n", currentLine);
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

reverse_line(char line[], int lineSize) {
    int left = 0;
    int right = lineSize - 1;

    for (int i = 0; left < right; left++, right--) {
        char temp = line[left];
        line[left] = line[right];
        line[right] = temp;
    }

    line[lineSize] = '\0';
}