#include<stdio.h>
void main(){
    float m1, m2, m3, m4, per, total;
    char grade;
    printf("enter the marks of 4 subject");
    scanf("%f %f %f %f", &m1,&m2, &m3, &m4);
    total= m1+m2+m3+m4;
    per= total/4;

if(per>=85)
grade='A';
else if(per>=75)
grade='B';
else if(per>=65)
grade='C';
else 
grade='D';
   
   printf("percentage is %f\n grade is %c\n", per, grade);
}