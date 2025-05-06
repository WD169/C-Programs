#include<stdio.h>
#include<string.h>
int main()

{
	char str1[55] ="This is a test string for testiing";
	char str2[20] ="test";
	char *p;
	p = strstr(str1,str2);
	if(p)
	{
		printf("string found\n");
		printf("First occurrence of string in %s is %s",str1,p);
	}
	else 
	printf("string not found\n");
	return 0;
	}

