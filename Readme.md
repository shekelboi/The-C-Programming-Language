# The C Programming Language by Brian W. Kernighan and Dennis. M. Ritchie

Personal solutions to the exercises from the first edition of the book.

## Notes

### Outdated practices

The book outlines a lot of outdated practices, which is not surprising considering it was published in 1978, and there were significant changes in terms of the syntax between C78 and C89 (ANSI C).

I am trying to follow the convention set by ANSI C (thus many of the solutions may not compile using C78).

#### Storing characters

Please note that I occasionally use

    char c = getchar()

I am using GCC as my compiler which defaults char to a signed variable (making it possible to store the EOF marker which has a value of -1).