#include<stdio.h>
void fibbonacci(int n)
{
	int n1=0,n2=1,n3,i;
	printf("\n%d \t%d",n1,n2);
	for(i=2;i<=n;i++)
	{
		n3=n1+n2;
		printf("\t %d",n3);
		n1=n2;
		n2=n3;
	}
}

int main()
{
	int n,i;
	printf(" Fibbonacci\n");
	printf("Enter the number: ");
	scanf("%d",&n);
	fibbonacci(n);
	return 0;

}
