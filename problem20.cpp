#include <stdio.h>
int main() {
    for (int i = 1; i <= 100; i++) {
        printf("%d\n", i);
        if (i == 10) {
            printf("Sorry\n");
            break;
        }
    }

    return 0;
}
