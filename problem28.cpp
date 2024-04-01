#include<stdio.h>
int main(){
	int a,b,c,i,user;
	printf("enter number limit");
	scanf("%d",&user);
	a=0;b=1;
	printf(" %d  %d  ",a,b);
	for(i=1;i<=user;i++){
		c=a+b;
		printf("  %d  ",c);
		a=b;b=c;
	}
}