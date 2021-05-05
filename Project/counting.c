#include<stdio.h>
void main(){
    int n, count=0, rem;
    printf("enter the number: ");
    scanf("%d ",&n);
    do{
        n=n/10;
        count++;

    } while(n>0);
        printf("number of digits is %d",count);
    
}