//#include<stdio.h>
//void main(){
    //float a=5.5, b=5.5;
    //printf("sum is %2f\n", a+b);
    //printf("diff is %2f\n", a-b);
    //int x=7;
   // printf("x=%d and x=%d", ++x, --x);
//}
//int a, b, max;
//printf("enter the values :");
//scanf("%d %d",&a, &b);
//max=a>b? a:b;
//printf("the larger lumber is %d\n", max);
//}

//# include<stdio.h>
//v//oid main(){
    //int num;
    //printf("enter any number: ");
    //scanf("%d", &num);
    //if(num<0)
    //printf("the number you entered is negative");
    //else
    //printf("error");


    #include<stdio.h>
    void main(){
        int year;
        printf("enter the number");
        scanf("%d", &year);
        if(year%100==0){
           if(year%400==0)

        
        printf("leap year\n");
        else
        printf("not leap year");
        }
else
{
    if (year%4==0)
    printf("leap year\n");
    else
    printf("not leap year");
}  
}