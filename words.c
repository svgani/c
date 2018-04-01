#include<stdio.h>
void word(int x);
int n;
int main()
{

printf("please enter amount\n");
scanf("%d",&n);
printf("entered amount is %d/-\n",n);
switch(n){
case 0 : printf("zero ");
	break;
case 1 : printf("one ");
	break;
case 2 : printf("two ");
	break;
case 3 : printf("three ");
	break;
case 4 : printf("four ");
	break;
case 5 : printf("five ");
	break;
case 6 : printf("six ");
	break;
case 7 : printf("seven ");
	break;
case 8 : printf("eight ");
	break;
case 9 : printf("nine ");
	break;
case 10  : printf("ten ");
	break;
case 11 : printf("eleven ");;
	break;
case 12 : printf("twelve ");
	break;
case 13 : printf("thirteen ");
	break;
case 14 : printf("fourteen ");
	break;
case 15 : printf("fifteen ");
	break;
case 16 : printf("sixteen ");
	break;
case 17 : printf("seventeen ");
	break;
case 18 : printf("eighteen ");
	break;
case 19 : printf("nineteen ");
	break;
case 20  : printf("twenty ");
	break;
default : printf("#check integer range\n");
}
printf("\n");
//word(n);
}

void word(int x)
{
int x1,i,rev,dig,n1, num;

while(x!=0)
{
dig=x%10;
x=x/10;
x1=x1*10+dig;
i++;
}
printf("i = %d\n",i);
if(i!=2)
{
while(x1!=0)
{
num=x1;
n1=num%10;
x1=num/10;
}
}
if(i==2)
{

switch(n){
case 0 : printf("zero ");
	break;
case 1 : printf("one ");
	break;
case 2 : printf("two ");
	break;
case 3 : printf("three ");
	break;
case 4 : printf("four ");
	break;
case 5 : printf("five ");
	break;
case 6 : printf("six ");
	break;
case 7 : printf("seven ");
	break;
case 8 : printf("eight ");
	break;
case 9 : printf("nine ");
	break;
case 10  : printf("ten ");
	break;
case 11 : printf("eleven ");;
	break;
case 12 : printf("twelve ");
	break;
case 13 : printf("thirteen ");
	break;
case 14 : printf("fourteen ");
	break;
case 15 : printf("fifteen ");
	break;
case 16 : printf("sixteen ");
	break;
case 17 : printf("seventeen ");
	break;
case 18 : printf("eighteen ");
	break;
case 19 : printf("nineteen ");
	break;
case 20  : printf("twenty ");
	break;
default : printf("#check integer range\n");
}
}

printf("\n");
}
