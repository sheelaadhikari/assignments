#include <stdio.h>
void main()
{
    int i, H = 0, L = 100, temp, count = 0;
    for (i = 1; i <= 75; i++)
    {
        printf("enter the temperatures%d: ", i);
        scanf("%d", &temp);
        if (temp > H)
        {
            H = temp;
        }
        if (temp < L)
        {
            L = temp;
        }
        if ((temp > 35) && (temp < 40))
        {
            count = count + 1;
        }
    }
printf("the highest temperature is %d and lowest temperature is %d\n");
 printf("the total number of temperature between 35 and 40 is %d", count);
}