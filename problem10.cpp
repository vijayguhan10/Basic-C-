#include <stdio.h>
#include <limits.h>

int main() {
    int inum = 4294967296; 
    if (inum == UINT_MAX) {
        printf("inum is equal to the maximum unsigned int value\n");
    } else {
        printf("inum is not equal to the maximum unsigned int value\n");
    }
}

