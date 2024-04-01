#include <stdio.h>

int main() {
    float inum = 10.75;
    int iinum;

    iinum = (int)inum;  

    printf("Float Value: %.2f\n", inum);
    printf("Integer Value: %d\n", iinum);

    return 0;
}
