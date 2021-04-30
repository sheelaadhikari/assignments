//write a program to test the number is prime or not
#include<stdio.h>
#include<math.h>
float prime(int n);
main(){
    int num;
    printf("enter the number: ");
    scanf("%d", &num);
     if(prime(num))
    
    printf("the number is  prime/n");
    else
    printf("the given number not prime");
    
}
float prime(int n){
    int i, flag=1;
   for(i=0; i<=n*n ; i++){
     if(n%i==0){
         flag=0;
         break;
    } 
   }
    return (flag);
}
