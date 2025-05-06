#include<stdio.h>

int main()
{
	int a,b,temp;
	a=15;
	b=45;
	scanf("%d",&a);
	scanf("%d",&b);
	temp=a;
	a=b;
	b=temp;
	printf("%d",temp);

	
	getch();
}
