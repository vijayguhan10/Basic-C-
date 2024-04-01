/*Write a C Program to print the given data using the suitable data types and format specifier:
Use the  required data types and print the output
1. b
2.100
3.1.000000
4. 30.456
5.Octal Equivalent of 100
6.Hexadecimal Equivalent of 100*/
#include <stdio.h>
#include <limits.h>

int main()
{
    int a = 100;
    float b = 1;
    char c = 'b';          
    float d = 30.456;
    int e = 0100;          
    int f = 100;
    printf("%c\n%d\n%f\n%.3f\noctal:%o\nHexa:%x", c, a, b, d, e, f);  
}
