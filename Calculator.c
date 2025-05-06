#include<stdio.h>

int main()
{
	char pratik;
	int no1,no2,res;
	printf("\n A,a,+=Addition");
	printf("\n S,s,-=Substraction");
	printf("\n M, m , *=Multiplication");
	printf("\n D,d, /=Division");
	printf("\n R,r, ^=Remainder");
	
	printf("\n Enter the Operation to be Performed=");
	scanf("%c",&pratik);
	printf("\n Enter the number1 = ");
	scanf("%d",&no1);
	printf("\n Enter the number2 = ");
	scanf("%d",&no2);
	
	switch(pratik)
	{
		case'A':
			case'a':
				case'+':res=no1+no2;
				printf("\n Result of Addition:%d+%d=%d",no1,no2,res);
					break;
						case'S':
			case's':
				case'-':res=no1-no2;
				printf("\n Result of Substraction:%d-%d=%d",no1,no2,res);
					break;
							case'M':
								case'm':
				case'*':res=no1*no2;
				printf("\n Result of Multiplication:%d*%d=%d",no1,no2,res);	
				break;
							case'D':
			case'd':
				case'/':res=no1/no2;
				printf("\n Result of Division:%d/%d=%d",no1,no2,res);
					break;
							case'R':
			case'r':
				case'^':res=no1^no2;
				printf("\n Result of Remainder:%d^%d=%d",no1,no2,res);
			break;
				default:
					printf("\n Wrong Operation selected");
					return 0;
			}
	}
