//conctenate the strings
#include<stdio.h>
#include<string.h>
int main(){
    char a[100], b[100];
    printf("enter the value for a: ");
    gets(a);
    printf("enter value for b: ");
    gets(b);
     strcat(a,b);
     printf("string obtained is %s\n", a);
     return 0;
     


}