#include<stdio.h>
void input (int[],int);
void count (int[],int);
int main()
{
	int n,a[100];
	printf("enter the size of array:");
	scanf("%d",&n);
	printf("enter array alement:");
	input (a,n);
	printf("enter element are :");
	count(a,n);
	return 0;
}
void input (int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}
void count (int a[],int n)
{
	int i,ecount=0,ocount=0;
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			ecount++;
		}
		else
		{
			ocount++;
		}
	}
	printf("even count =%d\n odd count =%d\n",ecount,ocount);
}
