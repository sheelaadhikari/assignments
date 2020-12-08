#include<stdio.h>
void main(){
    printf("helllow world\n");
    char name[7]="Sheela";
    // printf("%s",name);
    char surname[10]="Adhikari";
    int age=19;
    printf("%s%s%s%s","Name         : ",name," ",surname);
    printf("\n");
    printf("%s%d","Age          : ",age);
    char dateOfBirth[20]= "January 19 2001";
    printf("\n");
    printf("%s%s","Date Of Birth: ",dateOfBirth);
    float height=5.3;
    printf("\n");
    printf("%s%f","Height       : ",height);
    
 
}