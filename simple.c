#include<stdio.h>
int main(){
    int a=10;
    int *pointer=&a;
    printf("Address of 'a'%d",pointer);
        printf("\n\n\nvalue of 'a'%d",*pointer);

}