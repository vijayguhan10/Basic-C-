/*Write a C program to display the minimum and maximum value
 supported for short int and long int  data type in your compiler.*/
#include <stdio.h>
#include <limits.h>
#define p printf
int main() {
    p("Minimum value of short int: %d\n", SHRT_MIN);
    p("Maximum value of short int: %d\n", SHRT_MAX);
    p("Minimum value of long int: %ld\n", LONG_MIN);
    p("Maximum value of long int: %ld\n", LONG_MAX);
    
    return 0;
}
