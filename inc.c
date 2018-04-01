#include<stdio.h>
int main()
{
int a=5,b=8,p,q,r;
p=(a++)-(b--);
q=(--b)+(++a);
r=(++b)-(--a);
printf("a=%d\nb=%d\np=%d\nq=%d\nr=%d\n",a,b,p,q,r);
return 0;
}
