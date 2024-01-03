#include<stdio.h>
struct student
{
	char name [50];
	int roll ;
	int age;
	char adress[50];
	
}s;
int main()
{
	printf("enter the name\n");
	gets(s.name);
	printf("entet the roll\n");
	scanf("%d",&s.roll);
	printf("enter the age\n");
	scanf("%d",&s.age);
	printf("enter adress\n");
	gets(s.adress);
	printf("the student information are :\n");
	printf("\n name=%s\t roll=%d\t age=%d\t adress=%s",s.name,s.roll,s.age,s.adress);
	return 0;
}
