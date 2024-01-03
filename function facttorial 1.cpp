#include<stdio.h>
void palin(int);
int main()
{
	int n;
	printf("enter the number ");
	scanf("%d",&n);
	palin(n);
	return 0;
}
void palin (int n)
{
	int rev=0,on,r;
    on=n;
    while(n>0)
    {
    	r=n%10;
		rev=rev*10+r;
		n=n/10; 
	}
	if(rev==0)
	{
	printf("%d is palindrome",on);
    }
    else
    {
    	printf("%d is not palindrome",on);
	}
} 
