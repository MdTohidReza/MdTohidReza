#include<stdio.h>
int main()
{
	 int a=0,b=1,c,i,n;
	printf("enter the number");
	scanf("%d",&n);
	printf("%d\t %d\t",a,b);
	for(i=1; i<=(n-2); i++)
	{
	    
	    c=a+b;
	    printf("%d \t",c);
	    a=b;
	    b=c;
	}
	return 0;
}
