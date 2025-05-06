#include<stdio.h>
#include<conio.h>
struct employee
{
	char name[30],gender[20];
	int salary,age;
};
int main()
{
	struct employee e[100];
	int i;
	
	for(i=1;i<=3;i++)
	{
		 for(i=1;i<=3;i++)
		 {
		printf("Empolyee %d:\n",i);
	
		printf("Enter Employee's Name:");
		scanf("%s",&e[i].name);
		printf("Enter Employee's Age:");
		scanf("%d",&e[i].age);
		printf("Enter Employee's Salary:");
		scanf("%d",&e[i].salary);
		printf("Enter Employee's Gender:");
		scanf("%s",&e[i].gender);
	}
}
	printf("\nData\nName\tAge\tSalary\tGender\n");
	for(i=1;i<=3;i++)
	{
		printf("%s\t%d\t%d\t%s\n",e[i].name,e[i].age,e[i].salary,e[i].gender);
	}
	return 0;
}
