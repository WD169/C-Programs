#include<stdio.h>
#include<conio.h>

void main()
{
	int number,units;
	float amt;
	printf("Enter Consumer number:");
	scanf("%d",&number);
	printf("Enter Consumption number:\n");
	scanf("%d",&units);
	if (units>=0 && units<=30)
	{
		amt=units*1.75;
		printf("Total billing amount is %f\n",amt);
		}
		else if (units>=31 && units<=100)
		{
			amt=units*3.50;
			printf("Total billing amount is %f\n",amt);
		}
		else if (units>=101 && units<=300)
		{
			amt=units*6.00;
			printf("Total billing amount is %f\n",amt);
		}
		else if (units>=301 && units<=1000)
		
			{
			amt=units*12.60;
			printf("Total billing amount is %f\n",amt);
		}
		getch();
		
	}
