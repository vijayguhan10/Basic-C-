#include<stdio.h>
#define p printf
int main()
{
	int inum;
	if(inum=(1,2,3,4)){
		printf("%d\n",inum);
	}
	if(inum=(2,5,6,-1,-2,-3))
	{
		printf("%d",inum);
	}
}
