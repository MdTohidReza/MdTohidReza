#include<stdio.h>
int main()
{
	int n;
	printf("enter the number");
	scanf("%d",&n);
	switch(n)
	{
		case 1: printf("january");
		break;
		case 2: printf("february");
		break;
		case 3: printf("march");
		break;
		case 4: printf("april");
		break;
		default: printf("enter the valid choice");
		break;
	}
	return 0;
}
