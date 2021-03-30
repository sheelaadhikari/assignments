//write a program to find the sum of digits of number
#include<stdio.h>
int sum(int num);
main(){
    int num;
    printf("enter the number: ");
    scanf("%d", &num);
    printf("the sum of the digits is %d", sum(&num));
}
int sum(int num ){
    int n, sum=0, rem;
    while(n!=0){
        
        rem= n%10;
        
        sum=sum+rem;
       
    }
    return (sum);

}