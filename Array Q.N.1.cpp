#include<stdio.h>
int main()
{
	int a[100],i,n;
	printf("enter the size the of array");
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
	return 0;
}
