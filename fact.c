#include<stdio.h>
int factorial(int x)
{
	if(x==0 || x==1)
	{
		return 1;
	}
	else
	{
		return (x*factorial(x-1));
	}
}
int main()
{
	int x,result;
	printf("Enter the value: ");
	scanf("%d",&x);
	result=factorial(x);
	printf("Result of factorial = %d",result);
	
}
