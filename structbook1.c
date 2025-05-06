#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#define BUFFERSIZE 2
 
struct Book
{
    char name[50];
    char author[50] ;
    float price;
}a;

 int solution()
{
struct Book a;
 scanf("%s\n %s\n %f",&a.name,&a.author,&a.price);
 } 

int main()
{

 struct Book b;
    b=solution();
    
    printf("Name=%s\nAuthor=%s\nPrice=%.2f",b.name,b.author,b.price);
    return 0;
}
