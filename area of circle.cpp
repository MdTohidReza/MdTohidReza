#include<stdio.h>
int main(){
	float  C,A,r;
	float pi=3.4;
	printf("enter the value of r");
	scanf("%f",&r);
	C=2*pi*r;
	A=pi*r*r;
	printf("the value of C is %.1f\n",C);
	printf("the value of A is %.1f\n",A);
	return 0;
}
