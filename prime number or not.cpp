#include<stdio.h>
int main()
{
	int r,n,on,sum=0;
	printf("enter the number");
	scanf("%d",&n);
	on=n;
	while(n>0)
	{
	    
	    r=n%10;
	    sum=sum+r*r*r;
	    n=n/10;
	}
	if(on==sum)
	{
		printf("%d is armstrong",on);
	}
	else
	{
		printf("%d is not armstrong number",on);
	}
	
	return 0;
}
