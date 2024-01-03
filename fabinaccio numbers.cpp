#include<stdio.h>
#include<string.h>
int main ()
{
	int i,j,n;
	char str[100][100],s[100];					
	printf("enter the size of array : \n");
	scanf("%d",&n);
	printf("enter the character : \n");
	for(i=0;i<n;i++)
	{
		scanf("%s",&str[i]);
	}
	// sorting descending
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(strcmp(str[i],str[j])>0)
			{
				strcpy(s,str[i]);
				strcpy(str[i],str[j]);
				strcpy(str[j],s);
			}
		}
	}
	printf("sorted element : \n");
	for(i=0;i<n;i++)
	{
		printf("%s\t",str[i]);
	}
	return 0;
}
