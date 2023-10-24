#include <stdio.h>
#define MAXLINE 1000

char line[MAXLINE];
char save[MAXLINE];
int max;

// Copying the longest line, the test in the for loop is partly moved inside the loop for clarity
main() {
    int len;
    max = 0;

    while ((len = get_line()) > 0) {
        if (len > max) {
            copy();
            max = len;
        }
    }

    if (max > 0) {
        printf("%s\n", save);
    }
}

int get_line() {
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

copy() {
    int counter = 0;
    while ((save[counter] = line[counter]) != '\0') {
        counter++;
     }
}