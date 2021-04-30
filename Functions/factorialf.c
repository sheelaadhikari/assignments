//wap to find factorial using recursive function
#include<stdio.h>
int fact(int x);
main(){
    int x; 
    printf("enter the value; ");
    scanf("%d", &x);
    printf("factorial is %d", fact( x));
  

}
int fact(int x){
    if(x==1)return 1;
    
    return x* fact(x-1);
      
}
