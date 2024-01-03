#include<stdio.h>
struct dob
{
	int dd;
	int mm;
	int yy;
};
struct student
{
	char name[100];
	char address[100];
	char faculty[100];
	struct dob d;
};
int main()
{
	int i,n;
	struct student s[100];
	printf("enter the number of student");
	scanf("%d",&n);
	printf("enter the information ");
	for(i=0;i<n;i++)
	{
		printf("enter the name:");
		gets(s[i].name);
		printf("enter the address:");
		gets(s[i].address);
		printf("enter the faculty :");
		gets (s[i].faculty);
		printf("enter born year:");
		scanf("%d",&s[i].d.yy);
		printf("enter borm month:");
		scanf("%d",&s[i].d.mm);
		printf("enter born day:");
		scanf("%d",&s[i].d.dd);
	}
	printf("The information of student are :\n");
	for(i=0;i<n;i++)
	{
		printf("Name=%s\taddress=%s\tfaculty=%s\tdate of birth=%d-%d-%d",s[i].name,s[i].address,s[i].faculty,s[i].d.dd,s[i].d.mm,s[i].d.yy);
	}
	return 0;
}
