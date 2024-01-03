#include<stdio.h>
int main()
{
	int i,n,large,small,a[100];
	printf("enter the size of array : \n");
	scanf("%d",&n);
	printf("enter the number : \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter elemet are : \n");
	for(i=0;i<n;i++)
	{
		large=a[0];
		for(i=1;i<n;i++)
		if(large<a[i])
		{
			large = a[i];
		}
		small =a[0];
		for(i=1;i<n;i++)
		if(small > a[i])
		{
			small = a[i];
		}
	}
	printf("large = %d\t small = %d\t",large,small);
	return 0;
}
