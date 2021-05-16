#include<stdio.h>
void main(){
    int x, y, a,b;
    printf("enter the numbers: ");
    scanf("%d%d", &x ,&y);
    a=x;
    b=y;
    while(a!=b){
        if(a<b)
        a=a+x;
        else
        b=b+y;
    }
    printf("lcm is %d", a);
    a=x;
    b=y;
    while(a!=b){
        if(a>b)
        a=a-b;
        else
        b=b-a;
    }
    printf("hcf is %d ", a);
    
}