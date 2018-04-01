#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,r1,r2,rpart,ipart,d;
printf("enter the coefficient values\n");
scanf("%f%f%f",&a,&b,&c);
if(a==0||b==0||c==0)
printf("invalid input\n");
else
{
	d=(b*b-4*a*c);
if(d==0)
{
printf("the roots are real and equal\n");
r1=-b/(2*a);
r2=r1;
printf("root1=%f\troot2=%f\n",r1,r2);
}
else if(d>0)
{
printf("the roots are real and distinct\n");
r1=(-b+sqrt(d))/(2*a);
r2=(-b-sqrt(d))/(2*a);
printf("root1=%f\troot2=%f\n",r1,r2);
}
else
{
printf("the roots are imaginary\n");
rpart=-b/(2*a);
ipart=sqrt(fabs(d))/(2*a);
printf("root1=%f+i%f\troot2=%f-i%f\n",rpart,ipart,rpart,ipart);
}
}
}
