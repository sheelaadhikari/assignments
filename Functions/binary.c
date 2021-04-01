//write a program to convert decimal to binary number
#include<stdio.h>
long int binary(long int n);
void main(){
    long int num;
    printf("enter the decimal number: ");
    scanf("%d", &num);
    printf("the requred binary number is %d", binary(num));

}
long int binary(long int num){
    long rem, a=1, binary=0;
    while(num>0)
{
rem=num%2;
binary=binary+rem*a;
num/=2;
a*=10;
}
return binary;
}