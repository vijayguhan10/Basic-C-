/*Write a C program that computes the value of the  square and its cube  using pow()
Constraints:
Variable Name	Datatype
iNum	integer
iSquare	integer
iCube	integer*/
#include <stdio.h>
#include<math.h>
#define p printf
#define s scanf
int main()
{

	int inum,isquare,icube;
	p("Enter number1:");
	s("%d",&inum);
	p("Enter number2:");
	s("%d",&isquare);
	p("Enter number3:");
	s("%d",&icube);
	
	printf("power 1:%.2f\npower 2:%.2f\npower 3:%.2f",pow(inum,1),pow(isquare,2),pow(icube,3));
}