//Write a program to find out signed equivalent of an integer number  2147483649.
#include <stdio.h>

int main() {
    unsigned int unsignedNum = 2147483649;
    int signedEquivalent = (int)unsignedNum;

    printf("Unsigned integer: %u\n", unsignedNum);
    printf("Signed equivalent: %d\n", signedEquivalent);

    return 0;
}
