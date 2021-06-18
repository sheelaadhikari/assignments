#include <stdio.h>
 
int fact(int a);
 
int main()
{
 int no,factorial;
 
  	printf("Enter a number:\n");
  	scanf("%d",&no);
  	factorial=fact(no);
    printf("Factorial of the %d = %d\n",no,factorial);
}
 
int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}
