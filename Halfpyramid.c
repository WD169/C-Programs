#include<stdio.h>

int main()
{
	int a,b,n;
	printf("Enter number =");
	scanf("%d",&n);
		for(a=1;a<=n;++a)
		{
			for(b=1;b<=a;++b)
		{
			printf("*");
		}
		printf("\n");
	}		
return 0;
}
