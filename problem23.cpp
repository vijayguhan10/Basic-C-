#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (ch >= '0' && ch <= '9') {
        printf("It is a digit.\n");
    } else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("It is an alphabet.\n");
    } else {
        printf("It is a special symbol.\n");
    }

    return 0;
}
