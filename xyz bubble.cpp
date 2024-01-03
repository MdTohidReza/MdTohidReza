#include<stdio.h>
int main()
{
	int i,j,temp,n,a[100];
	printf("enter the size of array");
	scanf("%d",&n);
	printf("enter the element");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("entered element are");
	for(i=0;i<(n-1);i++)
	{
		for(j=0;j<(n-i-1);j++)
		{
			if(a[i]>a[j+1])
			{
				temp=a[i];
				a[i]=a[j+1];
				a[j+1]=temp
			}
		}
	}
	    printf("sorted element are ");
	     for(i=0;i<n;i++)
     	{
     		printf("%d\t",a[i]);
		}
		getch();	
		
}
