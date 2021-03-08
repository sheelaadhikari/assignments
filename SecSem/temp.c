// wap to find the lowest and highest temperature of the 75 district.
#include <stdio.h>
void main()
{
    int i, temp, low = 1000;
    for (i = 1; i <= 75; i++)
    {
        printf("enter the temp: ");
        scanf("%d", &temp);
        if (temp < low)
        {
            low = temp;
        }
    }

    printf("the lowest temperature is %d", low);
}