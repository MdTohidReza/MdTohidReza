#include<stdio.h>
int main()
{
	int i,a[100],n,large,small;
	printf("enter the size of array");
	scanf("%d",&n);
	printf("enter elements are\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("entered elements are ");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	large=a[0];
	for(i=0;i<n;i++)
	{
		if(large<a[i])
		{
			large=a[i];
		}
		
	}
	small=a[0];
	for(i=0;i<n;i++)
	{
		if(small>a[i])
		{
			small=a[i];
		}
	}
	printf("large=%d\n small=%d\n",large,small);
	
	return 0;
}
