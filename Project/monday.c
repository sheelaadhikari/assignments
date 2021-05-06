#include<stdio.h>
void main(){
    int x, y, z;
    int i, n;
    y=1;
    printf("enter the number of terms: ");
    scanf("%d", &n);
    for(i=1; i<n; i++){
        z=x+y;
        printf("%d",z);
        x=y;
        y=x;


    }
    printf("\n");
}