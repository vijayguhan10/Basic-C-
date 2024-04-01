//2	Write a C program to test whether signed char and char have the same range.
#include <stdio.h>
#include <limits.h>

int main() {
    if (CHAR_MIN == SCHAR_MIN && CHAR_MAX == SCHAR_MAX) {
        printf("signed char and char have the same range.\n");
    } else {
        printf("signed char and char do not have the same range.\n");
    }

    return 0;
}
