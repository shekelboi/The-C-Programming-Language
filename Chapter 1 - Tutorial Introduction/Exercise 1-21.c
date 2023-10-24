#include <stdio.h>
#include <stdbool.h>

#define MAXLINE 1000

// Folds the input line before the nth column

main() {
    char line[MAXLINE];
    int length;

    while ((length = get_line(line)) > 0) {
        fold_line(line, 5);
        printf("%s\n", line);
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

// Fold before the nth column
fold_line(char line[], int n) {
    int counter = 0;
    int columnCounter = 0;
    bool enteredColumn = false;

    while (counter < MAXLINE && line[counter] != '\0') {
        if (!enteredColumn && line[counter] != ' ') {
            columnCounter++;
            enteredColumn = true;
        } else if (line[counter] == ' ') {
            enteredColumn = false;
            if (columnCounter + 1 == n) {
                line[counter] = '\n';
                break;
            }
        }
        counter++;
    }    
}
