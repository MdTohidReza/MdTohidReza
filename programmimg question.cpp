#include<stdio.h>
#include<stdio.h>
int main()
{   
    char str[100];
    int i,j;
    printf("enter the string");
    gets(str);
    for(i=11;i>0;i--)
    {
    	for(j=0;j<i;j++)
    	{
    		printf("%c",str[j]);
		}
		printf("\n");
	}
    return 0;
}


