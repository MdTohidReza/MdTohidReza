#include<stdio.h>
int sum()
{ 
   int n,i,even=0,odd=0;
   printf("enter the number:");
   scanf("%d",&n);
   if(n%2==0)
   	  {
   	   printf("the number is even=%d\n",even);	
      }
    else
        {
    	printf("the number is odd =%d\n",odd);
	    }
}
   
   return 0;
}
int main()
{
	sum();
}
