#include <stdio.h>
#include <conio.h>
#include<stdlib.h>
#include <string.h>
struct Book
{
    char name[1000];
    char author[1000] ;
    float price;
}b;
int main()
{ int a;
	struct Book b;
scanf("%s ",&b.name);
flushall();
scanf("%s ",&b.author);
scanf("%f",&b.price);
book(b);
   printf("Name=%s\nAuthor=%s\nPrice=%.2f",b.name,b.author,b.price);
    return 0;
}
