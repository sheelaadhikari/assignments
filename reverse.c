// write a program to convert the given months into years.
#include <stdio.h>
void main(){
    int x;
    int year;
    int month;
    printf("Enter a variable: ");
    scanf("%d", &x);
    year= x/12;
    month= x%12;
    printf(" year= %d and month= %d",year,month);
    

   

    