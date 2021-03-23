//wap to print the address using pointers
#include<stdio.h>
void main(){
    int age=30;
    float salary= 15000.50;
    printf("the value of age is %d and address is %u\n", age, &age);
    printf("the value of salary is %f and address is %u", salary,&salary);


}