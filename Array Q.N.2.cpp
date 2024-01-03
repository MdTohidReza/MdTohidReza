#include<stdio.h>
int main()
{
	int a[100],i,n,sum=0;
	float avg;
	printf("enter the size  of array");
	scanf("%d",&n);
	printf("enter elements \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("elements are \n");
	for(i=0;i<n;i++)
	{
		printf("%d \t",a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	avg=(float)sum/n;
	printf("sum=%d\n average=%f",sum,avg);
	
	return 0;
}
