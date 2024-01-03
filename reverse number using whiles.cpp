#include<stdio.h>
int main()
{
	int i,n,count=0;
	printf("enter the number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    if(n%2==0)
	    {
	    	count++;
		}
	}
	if(count==2)
	{
		printf("%d is prime number",n);
	}
	else
	{
		printf("%d is not a prime number",n);
	}
	
	return 0;
}
