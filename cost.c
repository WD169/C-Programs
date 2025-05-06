#include<stdio.h>
#include<conio.h>
int main()
{
    int units;
    double cost;
    printf("Enter number of units:\n");
    scanf("%d", &units);
    if(units<=30)
    {
        cost=(1.75*units);
    }
    else if(units>30 && units<100)
    {
        cost=(3.50*units);
    }
    else if(units>100 && units<300)
    {
        cost=(6*units);
    }
    else 
    {
        cost=(12.60*units);
    }
    printf("The cost is:\n%f" ,cost);
    return 0;
}
