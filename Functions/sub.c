//write a program to find the subtraction of two variables using function.
#include<stdio.h>
int sub(int *p, int *q);
void main()
{
    int a, b;
    printf("enter the value: ");
    scanf("%d %d", &a, &b);
    printf("the required subtraction is %d", sub(&a, &b));
}
int sub(int *p, int *q)
{
    int sub;
    sub = *p - *q;
    return sub;
}
