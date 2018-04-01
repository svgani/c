#include<stdio.h>
int main()
{
int k,n=10,c=16;
while(c>=0)
{
k=n>>c;
if(k&1)
printf("1");
else
printf("0");
c--;
}
return 0;
}
