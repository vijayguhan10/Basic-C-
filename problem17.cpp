//Write a c program to swap two numbers using the following methods
#include<stdio.h>
int main()
{
	int num1,num2;
	printf("enter number1:");
	scanf("%d",&num1);
	printf("enter number2:");
	scanf("%d",&num2);
	printf("\n\nswapped no.1: %d , %d\nswapped no.2: %d , %d",num1+num2-num1,num1+num2-num2,num1*num2/num2,num1*num2/num1);
	
}