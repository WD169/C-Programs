#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,n;
	printf("\nEnter a three-digit number:");
	scanf("%d",&n);
	a=n%10;
	n=n/10;
	b=n%10;
	n=n/10;
	n=a*100+b*10+n;
	printf("%d",n);
}
