#include<stdio.h>
int main()
{
	int a[1000],i,n,sum=0,avg;
	printf("Enter size of the array :");
	scanf("%d",&n);
	printf("Enter the Elements in array :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
	
