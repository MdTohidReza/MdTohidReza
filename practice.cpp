#include<stdio.h>
int main()
{
	int i,n,a[100],sum=0;
	float avg;
	printf("enter the size of array\n");
	scanf("%d",&n);
	printf("enter the element\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("entered element are\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	avg=float(sum)\n;
	printf("sum=%d\n avg=%f\n",sum,avg);
	return 0;
}
