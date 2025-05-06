#include<stdio.h>

int main()
{
	char ch;
	printf("\n Enter the Character=");
	scanf ("%c",&ch);
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
	{
		printf("Enter character = %c is a vowel ",ch);
	}
	else 
	{
		printf("Enter character = %c is a constant",ch);
	}
}
