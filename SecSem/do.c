// write a program to print
#include <stdio.h>
void main()
{
<<<<<<< HEAD
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
=======
    char ch;
    printf("enter an alphabet :");
    scanf("%c", &ch);
    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("alphabet is a vowel \n");
        break;
    default:
        printf("alphabet is a consonant");
>>>>>>> b5d88a1037ef9863cdca6dbfe0797a0cf24ee5ae
    }
}