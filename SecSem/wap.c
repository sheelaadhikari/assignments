// WAP to swap the value using only two variables
#include <stdio.h>
void main()
{
    int a = 5, b = 10;
    printf("value of a and b before swapping is %d and %d ", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("the value of a and b after swapping is %d and %d",a, b);
}