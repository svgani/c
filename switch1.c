#include<stdio.h>
int main()
{
int a,marks;
printf("enter marks\n");
scanf("%d",&marks);
a=marks/10;
switch(a)
{
case 10:
case 9:
case 8: printf("#Honours\n");
	break;
case 7:
case 6: printf("#A\n");
	break;
case 5:
case 4: printf("#B\n");
	break;
case 3:
case 2:
case 1:
case 0: printf("#FAIL\n");
	break;
default: printf("#please check the entered marks\n");
}
}
