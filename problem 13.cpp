#include <stdio.h>
#define p printf
#define s scanf
int main() {
    int iNum1, iNum2, iMax;
    p("Enter first number: ");
    s("%d", &iNum1);
    p("Enter second number: ");
    s("%d", &iNum2);
    iMax = (iNum1 > iNum2) ? iNum1 : iNum2;
    p("Maximum of %d and %d is %d\n", iNum1, iNum2, iMax);
}
