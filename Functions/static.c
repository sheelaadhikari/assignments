//program to understand the use of static variables
#include<stdio.h>
void func(void);

main()
{
func ( );
func ( ) ;
func ( ) ;
}
void func(void)
{
int a=20;
static int b=30;
printf("the value of a and b is %d and %d\n", a,b);
a++;
b++;
} 