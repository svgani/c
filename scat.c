#include<stdio.h>
void length(char x[]);
int main()
{
int i=0,j=0;
char c,h,s1[100],s2[100],s3[100];
printf("enter s1\n");

while(c!=' ')
{
scanf("%c",&c);
if(c=='\n') break;
s1[i]=c;
i++;
}

s1[i]='\0';
length(s1);
printf("enter s2\n");
while(h!=' ')
{
scanf("%c",&h);
if(h=='\n') break;
s2[j]=h;
j++;
}
s2[j]='\0';
length(s2);
printf("string s1 is\n%s",s1);
printf("string s2 is\n%s",s2);
printf("string s3 is\n%s%s\n",s1,s2);
}

void length(char x[])
{
int i=0,length=1;
while(x[i]!='\0')
{
i++;
length++;
}
printf("lenght of %s is %d\n",x,length);
}
