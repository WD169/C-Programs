#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,temp;
	printf("Enter two numbers:");
	scanf("%d%d",&a,&b);
	printf("Before Swapping a=%d and b=%d\n",a,b);
	temp=a;
	a=b;
	b=temp;
	printf("After swapping a=%d b=%d",a,b);
	
}
