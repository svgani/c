#include<stdio.h>
int main()
{
int a,b;
printf("enter the values of a.b\n");
scanf("%d%d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("a=%d,b=%d\n",a,b);
}
