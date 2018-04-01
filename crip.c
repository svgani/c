#include<stdio.h>
#define MAX 5
#define KEY 3
int main()
{
char data[MAX], cipher[MAX];
int i;
for(i=0;i<MAX;i++)
{
	data[i]=getchar();
}
for(i=0;i<MAX;i++)
{
	cipher[i]=(data[i]+KEY);
}
for(i=0;i<MAX;i++)
{
	printf("%c",cipher[i]);
}
	printf("\n");
}
