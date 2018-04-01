#include<stdio.h>
#include<string.h>
int main()
{
char a[]="heLlo",b[]="helwo";
if(strncmp(b,a,2)==0)
printf("equal\n");
else
printf("not equal\n");
}