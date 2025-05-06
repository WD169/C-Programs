#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct employee 
{
	char name[100];
	char address[100];
	int pincode;
}e1,e2,e3;
int main()
{ struct employee e1;
	scanf("%[^\n]%*s",e1.name);
	scanf("%[^\n]%*s",&e1.address);
	scanf("%d",&e1.pincode);
	printf("Name :%s",e1.name);
		printf("Address :%s",e1.address);
			printf("Pincode :%d",e1.pincode);
}
