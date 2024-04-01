#include <stdio.h>
int main() {
    char cValue;
    printf("Enter a character: ");
    scanf("%c", &cValue);
    printf("ASCII value of '%c' is %d\n", cValue, cValue);
}
