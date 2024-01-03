#include<stdio.h>
int main()
{
		int i, n1,n2;
		printf("Enter your choice");
		scanf("%d%d",&n1,&n2);
		for( i=n1; i<=n2; i++);
		{
			if(i%2==0)
			{
				printf("even number%d\n",i);
			}
			else
			{
				printf("odd number%d\n",i);
			}
			
		}
		return 0;
}
