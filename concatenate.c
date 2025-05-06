#include<stdio.h>
#include <string.h>
 
int main()
{
    char s1[1000],s2[1000];  
    int i,j,k;
 
    printf("Enter  string1: ");
    gets(s1);
    printf("Enter  string2: ");
    gets(s2);
    j=strlen(s1);
    
    for(i=0;s2[i]!='\0';i++)  
    {
    	s1[i+j]=s2[i];
	}
	s1[i+j]='\0';
	k=strlen(s1);
 
    printf("Combined two strings ='%s'\n String Length is = %d\n",s1,k);
    
    return 0;
}
