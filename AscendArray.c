#include<stdio.h>
int main()
{
	int a[100],num,x,i[100],j[100];
	printf("Enter size of the array :");
	scanf("%d",&x);
	printf("Enter the Elements in array :");
	for(i=0;i<x;i++)
	{
		printf("%d",&num[i]);
	}
	for(i=0;i<x;i++)
	{
		for(j=0;j=i+1;j<x)
	{
		if(num[i]>num[j])
		{
			a=num[i];
			num[i]=num[j];
			num[j]=a;
		}
	}
}
printf("Numbers in Ascending order are: \n ");
for(i=0;i<n;i++)
{
	printf("%d\t",num[i]);
}
return 0;
}
