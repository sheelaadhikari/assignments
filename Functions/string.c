//wap to count the alphabets and space present in the given string.
#include<stdio.h>
void main(){
    char str[100];
    printf("enter the string: ");
    scanf("%[^\n]", str);
    printf("%s", str);

    int i, countalpha=0, countspace=0;
    for(i=0; str[i]!='\0'; i++){
        if((str[i]>='A'&& str[i]<='Z')||(str[i]>='a'&&str[i]<='z')){
            countalpha++;

        }
        else{
            if(str[i]==' ')
            countspace++;

        }
    }
    printf("\n%d", countalpha );
    printf("\n%d", countspace);
}