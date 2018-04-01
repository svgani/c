#include<stdio.h>
int c=0;
int main()
{
int a=10,b=20;
sum(a,b);
printf("sum of (%d,%d) is %d\n",a,b,c);
}

int sum(int a,int b)
{
return (c=a+b);
}
