#include <stdio.h>
void sum(int x, int y){
    int s;
    s=x+y;
    return s;
}
    main()
    {
        int a, b, s;
        printf("enter the value: ");
        scanf("%d%d", &a, &b);
        s= sum(a,b);
        printf("sum is %d ", s);

    }




