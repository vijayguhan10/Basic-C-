//wap to check perfect number or not
#include<stdio.h>
int main()
{
	int number,sum=0;
	printf("Enter number to check wether it is perfect number or not.");
	scanf("%d",&number);
	for(int i=1;i<=number-1;i++)
	{
		if(number%i==0)
		{
			sum=sum+i;
		}
	}
	(sum==number?printf("Yes ' %d ' it is a perfect number.",number):printf(" ' %d 'No it is not a perfect number.",number));
}