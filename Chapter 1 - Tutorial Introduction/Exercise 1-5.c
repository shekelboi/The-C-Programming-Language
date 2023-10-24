#include <stdio.h>
#define LOWER 0
#define UPPER 300
#define STEP 20

// Fahrenheit to Celsius converter

main() {
    for (int fahrenheit = UPPER; fahrenheit >= LOWER; fahrenheit-=STEP)
    {
        printf("%4d %6.1f\n", fahrenheit,  (5.0/9.0)*(fahrenheit - 32));
    }
}