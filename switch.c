#include<stdio.h>
int main()
{
int i,n;
printf("enter n\n");
scanf("%d",&n);
i=n%2;
switch(i)
{
case 1: printf("odd number\n");
	break;
case 0: printf("even number\n");
	break;
default: printf("#please enter valid number");
}
}
