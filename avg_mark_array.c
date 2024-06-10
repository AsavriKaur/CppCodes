#include<stdio.h>
int main()
{
	int a[5],i;
	float avg,sum;
	sum=0;
	printf("Enter marks: ");
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++){
		sum=sum+a[i];
	}
	avg=(float)(sum/5);
	printf("The sum is %f",sum);
	printf("The avg is %f",avg);	
	
	return 0;
}
