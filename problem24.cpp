#include <stdio.h>
int main() {
    printf("ASCII Table of Alphabets (Both Capital and Small Letters):\n");
    printf("------------------------------------------------------\n");

    for (char ch = 'A'; ch <= 'Z'; ch++) {
        printf("%4d     |  %c\n", ch, ch);
    }
    for (char ch = 'a'; ch <= 'z'; ch++) {
        printf("%4d     |  %c\n", ch, ch);
    }
}
