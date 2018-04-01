#include<stdio.h>
int main()
{
FILE *fp;
char c;
fp=fopen("filess.c","w");
while((c=getchar())!=EOF)
putc(c,fp);
fclose(fp);
fp=fopen("filess.c","r");
while((c=getc(fp))!=EOF)
printf("%c",c);
fclose(fp);
return 0;
}