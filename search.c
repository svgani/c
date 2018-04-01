//selection sort
#include<stdio.h>
int main()
{
   int a[100],i,j,n,temp;
	printf("enter n\n");
	scanf("%d",&n);
	printf("enter the elements of array\n");
	
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
   sort(i,j,n,temp,a);
    printf("sorted array \n");
	for(i=0;i<n;i++)
		printf("%d\n",a[i]);
}

sort(int i,int j,n,temp,int a[])
{
	for(i=0;i<n;i++)
	{
	  for(j=i;j<n;j++)
		{
			if(a[i]>a[j])
			{
			 swap(i,j,temp,a);	
			}
		}
	}
}
swap(int i,int j,temp,a[])
{
	temp=a[j];
	a[j]=a[i];
	a[i]=temp;
}