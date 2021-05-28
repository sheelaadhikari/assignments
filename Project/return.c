#include <stdio.h>

void displayArr(int inputArr[])
{
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("%d", inputArr[i]);
        if (i != 4)
        {
            printf(",");
        }
    }
}


int * multiply( int inputArr[], int multiplier){
    int i;
    for(i = 0; i< 5; i++){
        inputArr[i] = inputArr[i]*multiplier;
    }
    return inputArr;
}

void main()
{
    int myArr[5] = {3, 4, 6, 2, 5};
    printf("Here is input array \n");
    displayArr(myArr);

    int multiplier;
    printf("\nEnter value of multiplier");
    scanf("%d", &multiplier);

    int *multipliedArr = multiply(myArr, multiplier);
    printf("Here is output array \n");
    displayArr(multipliedArr);

    printf("\n");
}

