#include <stdio.h>
#include <string.h>
int main()
{
  char a[1000], b[1000];

  printf("Enter the first string:\n");
  gets(a);

  printf("Enter the second string:\n");
  gets(b);

  strcat(a, b);

  printf("String obtained on concatenation: %s\n", a,b);
  char s[] = "%s";
    int i;

    for (i = 0; s[i] != '\0'; ++i);
    
    printf("\nLength of the string: %d", i); 
  return 0;
}
