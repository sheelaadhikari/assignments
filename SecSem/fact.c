// wap to find the factorial of the given number.
#include <stdio.h>
void main()
{
    int fact = 1, i, n;
    printf("enter the number: ");
    scanf("%d", &n);
    for (i = 1; i <= 5; i++)
    {
        fact = fact * i;
    }
    printf("%d\n", fact);
}
