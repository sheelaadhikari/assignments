// string comparison
#include<stdio.h>
#include<string.h>
int main(){
    char a[100], b[100];
    printf("enter the string: ");
    gets(a);
    printf("enter the string: ");
    gets(b);
     if(strcmp(a,b)==0)
     printf("the string are equal\n");
    else
    //if(strcmp(a,b)!=0)
     printf("the string are not equal\n");
    
     return 0;



}
