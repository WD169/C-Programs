#include<stdio.h>
#include<conio.h>
void main()
{
	int number;
	int units;
	float amt;
	printf("Enter Consumer No:");
	scanf("%d",&number);
	printf("Enter Consumption Units:\n");
	scanf("%d",&units);
	if(units>=0 && units<=30)
	{
		amt= units*1.75;
		printf("The Total Billing Amount is %f\n",amt);
	}
	else if(units>=31 && units<=100)
	{
		amt= units*3.50;
		printf("The Total Billing Amount is %f\n",amt);
	}
	else if(units>=101 && units<=300)
	{
		amt= units*6.00;
		printf("The Total Billing Amount is %f\n",amt);
	}
	else if(units>=301 && units<=1000)
	{
		amt= units*12.60;
		printf("The Total Billing Amount is %f\n",amt);
	}
	getch();
	return 0;
	
	
}
