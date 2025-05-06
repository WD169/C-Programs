#include<stdio.h>
#include<conio.h>

int main()
{
	int a,b,n;
	char alphabet='A';
	printf("Enter number of rows:");
	scanf("%d",&n);
	
		for(a=1;a<=n;++a)
		{
			for(b=1;b<=a;++b)
		{
			printf("%c",alphabet);
		}
		++alphabet;
		printf("\n");
	}		
return 0;
}
