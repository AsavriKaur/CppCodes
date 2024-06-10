#include<stdio.h>
int main()
{
	int num, digits;
	digits=0;
	printf("enter number: ");
	scanf("%d",&num);
	
	do{
		num=num/10;
		digits++;
	}while(num!=0);
	
	printf("The digits are: %d",digits);
}
