#include <stdio.h>
#define TAB_SIZE 2

main() {
    char c;

    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            for (int i = 0; i < TAB_SIZE; i++) {
                printf(" ");
            }   
        } else {
            printf("%c", c);
        }
        
    }
    
}