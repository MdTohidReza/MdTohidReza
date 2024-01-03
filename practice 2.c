#include<stdio.h>
int main()
{
	int n,i,rev=0,on,r;
	printf("enter the number");
	scanf("%d",&n);;
	on=n;
	while(n>0)
	
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
   }
   if(on==rev)
   { 
   	 printf("%d are palindrome\n",on);
   }
   else
   {
   	printf("%d are not palindrome\n",on);
   }
	
	return 0;
}
