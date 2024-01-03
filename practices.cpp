#include<stdio.h>
int main()
{
	int i,j,n,temp,a[100];
	printf("enter the size of array");
	scanf("%d",&n);
	printf("enter the element\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	//sorting for ascending order
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("stored array:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
