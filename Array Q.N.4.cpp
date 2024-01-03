#include<stdio.h>
int mian()
{
	int i,n ,a[100],small,large;
	printf("enter the size of array");
	scanf("%d",&n);
	printf("enter the elements \n");
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enters the elements\n");
	for(i=0; i<n; i++)
	{
		printf("%d\t",a[i]);
	}
	large=a[0];
	for(i=0; i<n; i++)
	{
		if (large<a[i])
		{
			large=a[i];
		}
	}
	small=a[0];
	for(i=0; i<n; i++)
	{
		if (small>a[i])
		{
			small=a[i];
		}
	}
	printf("largest =%d\n smallest=%d\n",large,small);
	return 0;
}
