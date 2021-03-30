//write a program to find the larger among two numbers.
#include<stdio.h>
int num(int *x, int *y);
void main(){
    int a, b;
    printf("enter the  numbers: ");
    scanf("%d %d", &a, &b);
    printf("the larger number %d and %d is %d", a, b, num(&a, &b));
}
int num(int *x, int *y){

    if(*x>*y)
    return *x;
    else
    return *y;
}
