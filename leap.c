#include<stdio.h>
int main()
{
    int y,rem1,rem2;
    printf("enter the year = ");
    scanf("%d",&y);
    rem1=((y%4==0) && (!(y%100==0)))?0:1;
    rem2=(y%400==0)?0:1;

    if (!(rem1&&rem2)) {
        printf("%d is a leap year\n", y);
    }else {
        printf("%d is not a leap year\n", y);
    }

    return 0;
}
