#include<stdio.h>
void main(){
    int n, prod=1, rem;
    printf("enter the number: ");
    scanf("%d", &n);
    while(n>0){
        rem=n%10;
        prod=prod*rem;
        n=n/10;

    }
    printf("the product of the digits is %d", prod);

}