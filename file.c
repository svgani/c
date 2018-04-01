#include<stdio.h>
//#include<stdlib.h>
main()
{
FILE *fptr;
char ch;
fptr=fopen("leap.c","r");
printf("#file open successfully");
ch = fgetc(fptr);
    while (ch != EOF)
    {
        printf ("%c", ch);
        ch = fgetc(fptr);
    }
    fclose(fptr);
}
