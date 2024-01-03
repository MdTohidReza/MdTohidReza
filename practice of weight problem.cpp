#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,w;
	printf("Enter the value of weight in gram");
	scanf("%d",&w);
	a=w/1000;
	b=w%1000;
	printf("The value of a = %dkg\n",a);
	printf("The value of b = %gm",b);
	getch();
	return 0;
}
