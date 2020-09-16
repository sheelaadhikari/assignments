#include <stdio.h>
 
 void main(){
     int a,b,c,d,e;
     int x=0;
     printf("enter values for a,b,c,d,e:");
     scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
     if(a>x){
         x=a;
     }
     if (b>x){
          x=b;
     }
     if(c>x){
         x=c;
     }
     if(d>x){
         x=d;
     }
     if(e>x){
         x=e;
     }
     printf("Largest no is: %d",x );
 }