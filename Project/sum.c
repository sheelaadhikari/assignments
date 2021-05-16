#include <stdio.h>
int sum(int x, int y);
main()
{
    int a, b, s;
    printf("enter the numbers");
    scanf("%d%d", &a, &b);
    s = sum(a, b);
    printf("the sum is %d", sum);
}

int sum(int x, int y)
{
    int s;
    s = x + y;
    return s;
}
