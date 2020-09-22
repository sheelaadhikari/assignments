#include<stdio.h>
void main(){
    int a, b, max;
    printf(" enter values for a and b: ");
    scanf("%d%d",&a,&b);
    max=a>b? a:b;
    printf("larger of %d and %d is %d \n",a,b,max);

}


