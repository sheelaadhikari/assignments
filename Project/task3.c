// variable swapping
#include<stdio.h>
void swap(int a, int b);
int main(){
    int a=5, b=6;
    swap(a,b);
    return 0;

}
void swap(int x, int y){
    int temp;
    temp=x;
    x=y;
    y= temp;

printf("the value are a= %d and  b= %d\n" , x,y);
}