#include<stdio.h>
#include<conio.h>
int main()
{
	float radius,area=0,Pi=3.14;
	
	printf("Enter radius of Circle:\n");
	scanf("%f",&radius);
	area=Pi*radius*radius;
	printf("Area of circle:%f\n",area);
	float length,width,perimeter;
	printf("Enter length of Rectangle:\n");
	scanf("%f",&length);
	printf("Enter width of Rectangle:\n");
	scanf("%f",&width);
	// Perimeter of Rectangle= 2*(length+width)
	perimeter=2*(length+width);
	printf("Perimeter of Rectangle is:%0.4f\n",perimeter);
	return 0;
	
}
