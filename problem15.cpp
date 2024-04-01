#include <stdio.h>
#include<math.h>
#define p printf
#define s scanf
int main()
{
	char ch;
	s("%c",&ch);
	(ch>=65&&ch<=90?printf("%c",32+ch):printf("%c",ch));
}