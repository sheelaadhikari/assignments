// 5. Accept any two numbers if the first number is greater than second then print the sum  of these two numbers, otherwise print the difference. Write the program using ternary opetator.

#include<stdio.h>
void main(){
    int a,b,sum,diff;
    printf(" enter any two numbers: ");
    scanf("%d%d", &a,&b);
    sum= a+b;
    diff= a-b;
    a>b?printf(" the sum of %d and %d is %d", a, b,sum):printf(" the difference of %d and  %d is %d",a,b,diff);

}