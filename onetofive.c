#include<stdio.h>

void main()

{ printf("Chinmay Jadhav \n");
	int a;
	printf("Enter a no. between 1 and 5 :");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			printf("You choose ONE\n");
			break;
			
			case 2:
			printf("You choose TWO\n");
			break;
			
			case 3:
			printf("You choose THREE\n");
			break;
			
			case 4:
			printf("You choose FOUR\n");
			break;
			
			case 5:
			printf("You choose FIVE\n");
			break;
			
			default:
				printf("Invalid Choice ... Enter a no between 1 and 5 :\n");
				break;
	}
}



