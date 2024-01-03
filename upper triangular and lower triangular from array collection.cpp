#include<stdio.h>
int main ()
{
	int a[100][100],i,j,n,m,*p;
	printf("enter the order of matrix:\n");
	scanf("%d%d",&m,&n);
	p=&a[0][0];
	printf("enter the element :\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",(p+n*i)+j);
		}
	}
	// upper triangle
	printf("\n the upper triangle matrix is :");
	for(i=0;i<m;i++)
	{    
	    printf("\n"); 
		for(j=0;j<n;j++)
		{
			if(i>j)
			{
				printf("0");
				printf("\t");
			}
			else
			{
				printf("%d\t",*(p+n*i)+j);
			}
		}
	}
	// lower triangle
	printf("\n\n the lower triangle matrix is :");
	for(i=0;i<m;i++)
	{
		printf("\n");
		for(j=0;j<n;j++)
		{
			if(i>=j)
			{
				printf("%d\t",*(p+n*i)+j);
			}
			else
			{
				printf("0");
				printf("\t");
			}
		}
	}
	return 0;
}
