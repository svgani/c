#include<stdio.h>
int main()
{
int n,temp,rev=0,digit;
printf("enter n\n");
scanf("%d",&n);
temp=n;
while(n!=0)
{
digit=n%10;
rev=rev*10+digit;
n=n/10;
}
if(temp==rev)
printf("it is a palindrome\n");
else
printf("it is not a palindrome\n");
}
