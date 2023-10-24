#include <stdio.h>

// Celsius to Fahrenheit converter

main() {
    int lower, upper, step;
    float fahr, celsius;

    lower = 0;
    upper = 300;
    step = 20;

    celsius = lower;

    printf("C° to F° table\n");
    while (fahr <= upper)
    {
        fahr = (9.0/5.0) * celsius + 32;
        printf("%4.0f %6.1f\n", celsius, fahr);
        celsius = celsius += step;
    }
}