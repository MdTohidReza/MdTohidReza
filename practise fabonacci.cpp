#include<stdio.h>
int main()
{
	int r,n,sum=0,on;
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
		printf("%d is not armstrong",on);
	}
	return 0;
}
