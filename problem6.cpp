/*Write a C Program to print -10 using both unsigned and signed integer format specifiers.
Constraints:
Variable Name	Data type
iNum	Int*/
#include <stdio.h>

int main() {
    int inum = -10;

    printf("Using signed format specifier: %d\n", inum);
    printf("Using unsigned format specifier: %u\n", inum);

    return 0;
}
