#include<stdio.h>
void main()
{
char s1[100],s2[100],s3[100];
int i,j,count;
printf("enter string s1\n");
gets(s1);
printf("enter string s2\n");
gets(s2);
while(s1[i]!='\0')
{
s3[count]=s1[i];
count++;
i++;
}
s3[count++]=' ';
while(s3[j]!='\0')
{
s3[count]=s2[j];
count++;
j++;
}
//s3[count++]='\0';
puts(s3);
}
