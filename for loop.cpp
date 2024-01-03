#include<stdio.h>
int main()
{
  int n,i,ecount=0,ocount=0;
  
  printf("Enter the number");
  
  scanf("%d",&n);
  
  for(i=1; i<=n; i++)
  {
  	if(i%2==0)
  	
  	  { 
	   ecount++;
	  }
  
   else
     {
  	  ocount++;
     }
  
  }
  printf("sum of even number = %d\n",ecount);
  printf("sum of odd number = %d\n",ocount);
  
  return 0;
}
