#include<stdio.h>
#include<conio.h>
int main (){
	float a,c,r;
	float pi = 3.4;
	printf("enter the value of r");
	scanf("%f",&r);
    a=pi*r*r;
	c=2*pi*r;
	printf("the value of a is %.1f\n",a);
	printf ("the value of c is %.1f",c);
	getch();
}
