// write a program to generate a fibonacii series
#include <stdio.h>
void main()
{
    int x, y, z;
    int i, n;
    x = 0;
    y = 1;
    printf("enter the number of terms :");
    scanf("%d", &n);
    printf("%d", y);
    for (i = 1; i <= n; i++)
    {
        z = x + y;
        printf("%d", z);
        x = y;
        y = z;
    }
    printf("\n", z);
}
