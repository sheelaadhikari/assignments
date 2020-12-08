// #include <stdio.h>
// void main(){
//     int a,b,c,max;
//     printf("enter the value of a , b and c: ");
//     scanf("%d %d%d", &a,&b,&c);
//     max=(a>b)&&(a>c)?a:b>c?b:c;
//     printf("%d is greater",max);

// }



#include <stdio.h>
void main(){
    int a=10, b=6, c=30, d= 4, e=90, max;
    max=(a>b)&&(a>c)&&(a>d)&&(a>e)?:(b>c)&&(b>d)&&(b>e)?b:(c>d)&&(c>e)?c:(d>e)?d:e;
    printf("%d is greater ",max);
    
}