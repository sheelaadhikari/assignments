//write a program to find sum of squares of number between 1 to 25.
#include <stdio.h>
int func(void);
main()
{
    printf("the sum of those squares is %d", func());
}
int func(void)
{
    int num, s = 0;
    for (num = 0; num <= 25; num++)
    {
        if (num % 2 != 0)
            s = s + (num * num);
       
    }
     return s;
}
