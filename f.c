#include<stdio.h>
void fibonacci(int x)
{ int a=0,b=1,c,i;
	printf("\n%d\t%d",a,b);
	for(i=2;i<=x;i++)
	{
		c=a+b;
		printf("\t%d",c);
		a=b;
		b=c;
	   	
	}
}
int main()
{
	int x;
	printf("Enter the value: ");
	scanf("%d",&x);
	fibonacci(x);
	return 0;
}
