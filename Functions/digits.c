//write a program to find the sum of digits of number
#include<stdio.h>
int sum(int *num);
main(){
    int n;
    printf("enter the number: ");
    scanf("%d", &n);
    printf("the sum of the digits is %d", sum(&n));
}
int sum(int *num ){
    int n, sum=0, rem;
    while(n>0){
        
        rem= n%10;
        
        sum=sum+rem;
       
    }
    return (sum);

}