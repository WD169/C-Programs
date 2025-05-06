#include<stdio.h>
struct address
{
	char city[20];
	int pin;
	char phone[14];
};
struct employee
{
	char name[20];
	struct address add;
}
