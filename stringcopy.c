#include <stdio.h>
#include <string.h>
 
void stringcopy(char *s1,char *s2)
{
	int i;
    for(i=0;s2[i]=s1[i];i++);
    
    s2[i]='\0';
     	
}
int main()
{
    char s1[1000],s2[1000];  
    int i;
 
    printf("Enter any string: ");
    gets(s1);
    stringcopy(s1,s2);
    
    printf("Initial string s1 = %s\n",s1);
    printf("Copied string s2 = %s\n",s2);
    return 0;
    
}
