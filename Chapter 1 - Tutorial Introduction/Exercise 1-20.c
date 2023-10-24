#include <stdio.h>
#define MAXLINE 1000
#define TAB_LENGTH 4

// Replaces spaces with a minimum number of tabs + spaces

main() {
    char line[MAXLINE];
    char result[MAXLINE];
    int blankSequence = 0;

    int length;


    while ((length = get_line(line)) > 0) {
        int behind = 0; // How many characters the result is behind the line.
        int i = 0;
        for (; i < MAXLINE - 1 && line[i] != '\0'; i++) {
            if (line[i] == ' ') {
                blankSequence++;
                behind++;
            } else {
                if (blankSequence > 0) {
                    int numberOfTabs = blankSequence / TAB_LENGTH;
                    int numberOfSpaces = blankSequence % TAB_LENGTH;

                    for (int j = 0; j < numberOfTabs; j++) {
                        result[i - behind--] = '\t';
                    }

                    for (int j = 0; j < numberOfSpaces; j++) {
                        result[i - behind--] = ' ';
                    }
                }
                result[i - behind] = line[i];
                blankSequence = 0;
            }
        }
        result[i - behind] = '\0';
        printf("%s\n", result);                
    }
    
}


int get_line(char line[]) {
    int i = 0;
    for (; i < MAXLINE - 1; i++) {
        char c = getchar();
        if (c == EOF || c == '\n') {
            break;
        }
        line[i] = c; 
    }

    line[i] = '\0';
    return i;       
}
