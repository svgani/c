#include<stdio.h>
void add();
void showall();
int main()
{
int choice;
   do
   {
printf("please enter the choice\n to add data - 1\t to show all the content - 2\t to exit - 3\n");
scanf("%d",&choice);
	switch(choice)
	{
	case 1: add();
		break;
	case 2: showall();
		break;
	case 3: exit(0);
	default: printf("#please check the choice\n");
	}
   }while(1);
}

void add()
{
char c,x[1], name[20],branch[20],city[20],surname[20];
FILE *fp;
gets(x);
printf("enter name \n");
gets(name);
printf("enter branch \n");
gets(branch);
printf("enter city \n");
gets(city);
printf("enter surname \n");
gets(surname);
printf("name=%s branch=%s city=%s surname=%s\n",name,branch,city,surname);

fp=fopen("data.txt","a");
fprintf(fp,"%s\t",name);
fprintf(fp,"%s\t",branch);
fprintf(fp,"%s\t",city);
fprintf(fp,"%s\n",surname);
fclose(fp);
fp=fopen("data.txt","r");
c = fgetc(fp);
    while (c != EOF)
    {
        printf("%c", c);
        c = fgetc(fp);
    }
fclose(fp);
}

void showall()
{
char c;
FILE *fp;
fp = fopen("data.txt","r");
c = fgetc(fp);
    while (c != EOF)
    {
        printf("%c", c);
        c = fgetc(fp);
    }
fclose(fp);
}
