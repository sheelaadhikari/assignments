// write a program to print
#include <stdio.h>
void main()
{
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
    }
}