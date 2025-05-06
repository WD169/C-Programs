#include<stdio.h>
#include<conio.h>
int main()
{
	int num,index=0;
	printf("Enter a number\n");
	scanf("%d",&num);
	do
	{
		printf("\n%d",index);
		index=index+1;

	}while(index<num);
	return 0;
}
