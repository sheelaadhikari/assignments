//write a program to print the reverse of positive interger
#include<stdio.h>
void reverse (long int n);
 void main(){

    long int num;
    printf("enter the number: ");
    scanf("%d", &num);
    reverse(num);
    printf("\n");

}
void reverse (long int n){
    int rem;
    if(n==0)
    return;
    else{
        rem= n%10;
        printf("%d", rem);
        n/=10;
        return (n);
    }

}