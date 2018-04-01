#include<stdio.h>

void main ()
{
int *p,x,y,z,*q,*r;
x=10;
y=20;
printf("the values of x and y are %d,%d\n",x,y);
p=&x;
q=&y;
r=&z;
z=*p;
x=*q;
y=*r;
printf("the swapped values of x and y are %d,%d\n",x,y);
}