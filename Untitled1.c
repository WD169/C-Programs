#include<stdio.h>

int main()
{
	int no1,no2,no3;
	printf("\n Enter Number1=");
	scanf("%d",&no1);
	printf("\n Enter Number2=");
	scanf("%d",&no2);
	printf("\n Enter number3=");
	scanf("%d",&no3);
	if((no1>no2) && (no1>no3))
	{
	
	
     printf("number1 is greater than no2 or no3");
}
	else if((no2>no1) && (no2>no3))
	{
	
	
		printf("number2 is greater than no1 or no3");
	}
		else
	{
		printf("number3 is greater than no1 or no3");
	}
}



