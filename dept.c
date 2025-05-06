#include<stdio.h>
#include<conio.h>
struct employee
{
	char name[20],dept[20];
	int salary;
	struct
	{
		int date,month,year;
	}date_joining;
};
void main()
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
		printf("Enter Department Name:");
		scanf("%s",&e[i].dept);
		printf("Enter Salary:");
		scanf("%d",&e[i].salary);
		printf("Enter joining date:");
		scanf("%d",&e[i].date_joining.date);
		printf("Enter joining month:");
		scanf("%d",&e[i].date_joining.month);
		printf("Enter joining year:");
		scanf("%d",&e[i].date_joining.year);
	}
	}
	printf("\nEmployee list\nName\tDept\tSalary\t\tDate of joining\n");
     for(i=1;i<=3;i++)
     {

		
		{
			printf("%s\t%s\t%d\t\t%d\t%d\t%d\n",e[i].name,e[i].dept,e[i].salary,
			e[i].date_joining.date,e[i].date_joining.month,e[i].date_joining.year);
		}
	}
	
}
