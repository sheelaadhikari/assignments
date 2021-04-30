//write a program to find the given number is even or odd.
#include<stdio.h>
void find(int n);
 main(){
    int num;
    printf("enter the number: ");
    scanf("%d", &num);
    find(num);

}
void find(int n){
   
    if(n%2==0)
    printf("the given number is even", n);
    else
    printf("the given number is odd", n);
}


