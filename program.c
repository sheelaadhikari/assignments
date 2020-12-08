// write a program to find factorial of a number
#include <stdio.h>
void main()
{
    int i, f = 1;
    printf("enter a number: ");
    scanf("%d", &i);
    for (i; i > 0; i--)
    {
        f = f * i;
    }

    printf("the factorial 0f the number is %d", f);
}
