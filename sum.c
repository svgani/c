#include<stdio.h>
int main()
{
int sum=0,i,n,digit;
printf("enter n\n");
scanf("%d",&n);

while(n!=0)
{
digit=n%10;
sum+=digit;
n=n/10;
}
printf("the sum of the digits of a given number is\n %d\n",sum);
}
