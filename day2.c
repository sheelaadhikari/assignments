//  write a program to find the percentage of five student having five subject and find the highest percentage
#include <stdio.h>
void main()
{
    int e1, p1, b1, c1, m1, sum1, total = 500;
    float per1;

    printf("Enter the marks for first student");
    scanf("%d%d%d%d%d", &e1, &p1, &b1, &c1, &m1);
    sum1 = e1 + p1 + b1 + c1 + m1;
    printf("sum1=%d \n", sum1);
    per1 = (sum1 * 100) / total;
    printf("percent of std1= %f\n", per1);

    int e2, p2, b2, c2, m2, sum2;
    float per2;
    printf("Enter the marks for second student");
    scanf("%d%d%d%d%d", &e2, &p2, &b2, &c2, &m2);
    sum2 = e2 + p2 + b2 + c2 + m2;
    printf("sum2=%d \n", sum2);
    per2 = (sum2 * 100) / total;
    printf("percent of std2= %f\n", per2);

    int e3, p3, b3, c3, m3, sum3;
    float per3;
    printf("Enter the marks for third student");
    scanf("%d%d%d%d%d", &e3, &p3, &b3, &c3, &m3);
    sum3 = e3 + p3 + b3 + c3 + m3;
    printf("sum3=%d\n", sum3);
    per3 = (sum3 * 100) / total;
    printf("percent of std3= %f\n", per3);

    int e4, p4, b4, c4, m4, sum4;
    float per4;
    printf("Enter the marks for fourth student");
    scanf("%d%d%d%d%d", &e4, &p4, &b4, &c4, &m4);
    sum4 = e4 + p4 + b4 + c4 + m4;
    printf("sum4=%d\n", sum4);
    per4 = (sum4 * 100) / total;
    printf("percent of std4= %f\n", per4);

    int e5, p5, b5, c5, m5, sum5;
    float per5;
    printf("Enter the marks for fifth student");
    scanf("%d%d%d%d%d", &e5, &p5, &b5, &c5, &m5);
    sum5 = e5 + p5 + b5 + c5 + m5;
    printf("sum5=%d\n", sum5);
    per5 = (sum5 * 100) / total;
    printf("percent of std5=%f\n", per5);

    float pera, perb, perc, perd, pere;
    float x = 0;
    printf("Enter the percent of five students");
    scanf("%f%f%f%f%f", &pera, &perb, &perc, &perd, &pere);
    if (pera > x)
        x = pera;
    if (perb > x)
        x = perb;
    if (perc > x)
        x = perc;
    if (perd > x)
        x = perd;
    if (pere > x)
        x = pere;

    printf("the highest percent is %f", x);
}
