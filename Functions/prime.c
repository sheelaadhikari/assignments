//write a program to test the number is prime or not
#include<stdio.h>
#include<math.h>
int prime(int n);
main(){
    int n;
    printf("enter the number: ");
    scanf("%d", &n);
     if(prime(n))
    
    printf("the number is  prime/n");
    else
    printf("the given number not prime");
    
}
int prime(int n){
    int num, flag=1;
   for(num=0; num<=sqrt(n); num++){
     if(n%num==0){
         flag=0;
         break;
    } 
    return (flag);
}
