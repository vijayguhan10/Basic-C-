/*Write a C program to print the range of an integer and floating point 
variable. Use macros defined in the header file <limits.h>*/
#include<stdio.h>
#define p printf
#include<limits.h>
#include<float.h>
#define s scanf
int main()
{
	printf("min value of float: %e\nmax value of float: %e",FLT_MIN,FLT_MAX);
	printf("\nmin value of double: %e\nmax value of double: %e",DBL_MIN,DBL_MAX);
	printf("\nmin value of char: %d\nmax value of char: %d",CHAR_MIN,CHAR_MAX);
	printf("\nmin value of int: %d\nmax value of int: %d",INT_MIN,INT_MAX);
	
	
}