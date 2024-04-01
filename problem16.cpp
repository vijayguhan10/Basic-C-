//Write a c program to find whether the given number is odd or even using bitwise AND operator
#include <stdio.h>
int main() {
    int iNum;

    printf("Enter a number: ");
    scanf("%d", &iNum);

    if (iNum & 1) {
        printf("%d is an odd number.\n", iNum);
    } else {
        printf("%d is an even number.\n", iNum);
    }

    return 0;
}
