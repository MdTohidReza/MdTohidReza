#include<stdio.h>
int main()
{
	int i,j,m,n,a[100][100],sum=0;
	printf("enter the order the of matrix\n");
	scanf("%d%d",&m,&n);
	printf("enter the elements");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("entered elements are\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\n",a[i][j]);
		}
		printf("\n");
	}
	// row
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			sum=sum+a[i][j];
		}
		printf("sum=%d\n",sum);
	}
	return 0;
	
}
