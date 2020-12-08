#include <stdio.h>
void main()
{
    int i, n, sum = 0, term = 1;
    printf("enter the number of term: ");
    scanf("%d", &n);
    for (i + 1; i <= n; i++)
    {
        sum = sum+ term;
        term = term+ i;
    }
    printf("the sum of series upto %d term is %d \n", n, sum);
}
