#include<stdio.h>
int dowork(int a, int b, int*p);
int main(){
    int a, b, *p;
    *p=a;
    a=b; 
    b=*p;

}
int main(){
    int a=10, b=20, *p;
    dowork(a,b,  *p);
    printf("the required value is %d and%d ", a,b );

    
}