#include<stdio.h>
void even(int n);
main(){
    int num;
    printf("enter the number: ");
    scanf("%d", &num);
    even(num);

}
void even( int n){
    if(n%2==0){
        printf("the number is even");
        
    }
    else
    printf("error");
}