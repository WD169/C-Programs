#include<stdio.h>
#include<conio.h>

struct Student
{
	char name[40];  //string 
	int age;
	float per;
};
int main()
{
    int i;
		struct Student s[7];
		for(i=0;i<7;i++)
		{
		printf("\nEnter the name = ");scanf( "%s",&s[i].name);      //variable.member
		printf("\nEnter the Age = ");scanf("%d",&s[i].age);
		printf("\nEnter the Percentage = "); scanf("%f",&s[i].per);
	}
	printf("\nName\tAge\tPercentage\n");
	for(i=0;i<7;i++)
	{
	printf("\n%s\t%d\t%f\n",s[i].name,s[i].age,s[i].per);
}
}
		
	


	

