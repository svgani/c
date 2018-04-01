#include<stdio.h>

void digits(int y);
void word(int x);
void switch1(int x);
void switch2(int x);
void tens(int x);
void hundreds(int x);
void thousands(int x);
void tenthousands(int x);
void lakh(int x);

int count=0;

int main()
{
	int n;
	printf("enter number\n");
	scanf("%d",&n);
	digits(n);
	word(n);
	printf("\n");
}

void digits(int y)
{
	while(y!=0)
	{
	y=y/10;
	count++;
	}
	printf("no of digits = %d\n",count);
	printf("number in words\n");
}

void word(int x)
{
	if(count==0)
		printf("zero\n");
	if(count==1)
		switch1(x);
	if(count==2)
		tens(x);
	if(count==3)
		hundreds(x);
	if(count==4)
		thousands(x);
	if(count==5)
		tenthousands(x);
	if(count==6)
		lakh(x);
}

void tens(int x)
{
int x1,y;
	if((x>9&&x<=19) || x%10==0)
	{
	switch2(x);
	}
	else
	{
	x1=x%10;
	x=x/10;
	y=x*10;
	switch2(y);
	switch1(x1);
	}
}

void hundreds(int x)
{
int z,y=x;
x=y%100;
z=y/100;
switch1(z);
if(y>=100)
printf("hundred ");
if(x!=0)
printf("and ");
tens(x);
}

void thousands(int x)
{
int z,y=x;
x=y%1000;
z=y/1000;
switch1(z);
if(y>=1000)
printf("thousand ");
if(x!=0)
hundreds(x);
}

void tenthousands(int x)
{
int z,y=x;
x=y%1000;
z=y/1000;
tens(z);
if(y>=10000)
printf("thousand ");
thousands(x);
}

void lakh(int x)
{
int z,y=x;
x=y%100000;
z=y/100000;
tens(z);
if(y>=100000)
printf("lakh ");
tenthousands(x);
}

void switch1(int x)
{
	switch(x)
	{
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
	}
}

void switch2(int x)
{
	switch(x)
	{
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
case 30  : printf("thitry ");
	break;
case 40 : printf("fourty ");;
	break;
case 50 : printf("fifty ");
	break;
case 60 : printf("sixty ");
	break;
case 70 : printf("seventy ");
	break;
case 80 : printf("eighty ");
	break;
case 90 : printf("ninety ");
	break;
	}
}
