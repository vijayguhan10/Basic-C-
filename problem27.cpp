//Write a C program to check whether a number is a Strong Number 
#include <stdio.h>
#define p printf
#define s scanf
int main() {
    int i=1, num,originalNum,remainder,sum = 0,factorial;

    p("Enter a number: ");
    s("%d", &num);

    originalNum = num;
    while(num>0){
    	factorial=1;
    	remainder=num%10;
    	for(i=1;i<=remainder;i++)
    	{
    		factorial=factorial*i;
		}
		sum+=factorial;
		num/=10;}
    if (sum == originalNum) {
        p("%d is a strong number.", originalNum);
    } else {
        p("%d is not a strong number.", originalNum);
    }
}