#include<stdio.h>
int main()
{
	int i,n,j;
	char str[100],a[100];
	printf("enter the size of array");
	scanf("%d",&n);
	printf("enter the character");
	for(i=0;i<n;i++)
	{
		scanf("%s",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
		
	    	if(strcmp(a[i],a[j])>0)
	    	{
		    	strcpy(a,str[i]);
			    strcpy(str[i],str[j]);
			}    strcpy(str[j],s);
		}
	}
	printf("sorted character are : \n");
	for(i=0;i<n;i++)
	{
		printf("%s\n",a[i]);
	}
	return 0;
}
