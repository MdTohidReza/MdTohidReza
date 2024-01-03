#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,w;
    printf("Enter weight in gram: ");
    scanf("%f", &w);
    a=w/1000;
    b=w%1000;
    printf("the value of a is =%dkg\n", a);
    printf("the value of b is =%dgm\n",b);
    getch();
    return 0;
}

