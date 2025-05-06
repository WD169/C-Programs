#include<stdio.h>
#include<string.h>
int main()
{
	int len;
	char a[100];
	printf("Enter a string\n");
	gets(a);
	len=strlen(a);
	printf("The length of the entered string is: %d",len);
}
