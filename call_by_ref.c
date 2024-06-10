#include<stdio.h>
int sum(int*a,int*b);
int main()
{
	int a,b;
	int s;
	
	printf("Enter numbers: ");
	scanf("%d%d",&a,&b);
	s=sum(&a,&b);
	printf("Sum is: %d",s);
}

int sum(int*a,int*b){
	int sum;
	sum=*a+*b;
	return(sum);
}
