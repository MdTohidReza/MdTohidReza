#include<stdio.h>
int main()
{
	int i,n,esum=0,osum;
	printf("enter the number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			esum=esum+i;
		}
		else
		{
			osum=osum+i;
		}
	}
	printf("sum of even number = %d",esum);
	printf("sum of odd number = %d",osum);
	return 0;
}
