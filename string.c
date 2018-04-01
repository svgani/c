#include<stdio.h>
#include<ctype.h>
int main()
{
char a[]="hello",b[]="helwo";
//strlwr(a);
printf("%s\n",a);
return 1;
}

char *strlwr(char *str)
{
  unsigned char *p = (unsigned char *)str;

  while (*p) {
     *p = tolower((unsigned char)*p);
      p++;
  }

  return str;
}
