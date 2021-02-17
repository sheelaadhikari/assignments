#include <stdio.h>
#define SIZE 5
void main()
{
    int arr[SIZE], i, even = 0, odd = 0;
    for (i = 0; i < SIZE; i++)
    {
        printf("enter the arr[%d]: ", i);
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0)
            even++;

        else

            odd++;
    }
    printf("even numbers =%d,odd numbers =%d\n", even, odd);
    printf("the  array elements are : \n");
    for (i = 0; i < 5; i++)
    {
        printf("%d\t", arr[i]);
        printf("\n");
    }
}
