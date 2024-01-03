#include<stdio.h>
int main ()
{
	int a[100],n,i,j,*p,temp;
	printf("enter the size of array : \n");
	scanf("%d",&n);
	p=a;
	printf("enter the number : \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",p+i);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
		
		    if(*(p+j)<*(p+i))
		    {
			    temp=*(p+i);
			    *(p+i)=*(p+j);
			}    *(p+j)=temp;
		}
		
	}
	printf("sorted array are : \n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",*(p+i));
	}
	return 0;
	
}
