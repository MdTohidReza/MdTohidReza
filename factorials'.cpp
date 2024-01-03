#include<stdio.h>
int main()
{
	int i,num;
	float sum=0,fact=1;
	while(num<=7)
	{
		for(i=1; i<=7; i++)
	
	   {
	   	fact=fact*i;
	   }
	   
	   sum=sum+(num/fact);
	   num++;
	}
	printf("sum of series is %f\n",sum);
	
	return 0;
}
