#include<stdio.h>
int input (int[][100],int,int);
int display (int[][100],int,int);
int sum (int[][100],int,int,int[][100]);
int main()
{
	int a[100][100],m,n;
	printf("enter the order of matrix :");
	scanf("%d%d",&m,&n);
	printf("enter the first matrix : \n");
	input (a,m,n);
	display (a,m,n);
	printf(" enter the second matrix : \n");
	input (b,m,n);
	display (b,m,n);
	printf("sum= \n");
	sum(a,m,n,b);
	return 0;
}
int input (int a[][100],int m,int n)
{
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
}
int display (int a [][100],int m,int n)
{ 
    int i,j;
	for(i=0; i<m; i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}
int sum (int a[][100],intm,intn,int b[][100])
{
	int c[100][100],i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	display (c,m,n);
}
