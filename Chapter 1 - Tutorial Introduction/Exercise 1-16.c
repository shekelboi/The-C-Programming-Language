#include <stdio.h>

// Removes trailing blanks and tabs from the text

main() {
    char test[] = "12345 \t";
    int length = remove_blank(test, 8);
    printf("%s| this is the end of the string, the new length is %d", test, length);    
}

// Returns the new length
int remove_blank(char input[], int size) {
    for (int i = size - 1; i >= 0; i--) {
        if (input[i] != ' ' && input[i] != '\t' && input[i] != '\n' && input[i] != '\0') {
            input[i + 1] = '\0';
            return i + 2;
        }
    }
    return 0;
}