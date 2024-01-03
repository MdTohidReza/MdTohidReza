#include<stdio.h>
void display(int [],int);
void reverse(int [],int);
int main ()
{
	int n,i ,a[100];
	printf("enter the size of array \n");
	scanf("%d",&n);
	printf("enter the element \t");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	display(a,n);
	reverse (a,n);
	return 0;
}
void display (int a[],int n)
{
	int i;
	printf("enter element are \n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
void reverse(int a[],int n)
{
	int i;
	printf("reverse element are\n");
	for(i=n-1;i>=0;i--)
	{
		printf("%d\t",a[i]);
	}
}


