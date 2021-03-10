// write a program to print
#include <stdio.h>
void main()
{
    int a, b, x, i;
    printf("enter the two number: ");
    scanf("%d%d", &a, &b);
    for (x = a + 1; x <= b - 1; i++)
    {
        for (i = 2; i < x; i++)
        {
            break;
        }
        if (i == x)
        {
            printf("%d\t", x);
        }
    }
}