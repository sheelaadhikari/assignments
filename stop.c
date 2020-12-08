#include <stdio.h>
void main()
{
    int num, sum = 0;
    do
    {
        printf("enter the number(0 to stop): ");
        scanf("%d", &num);
        sum += num;

    } 
    while (num != 0);
    printf("sum is %d", sum);
}
