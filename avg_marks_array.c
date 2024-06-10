#include<stdio.h>
int main()
{
	int a[5],i,sum;
	float avg;
	sum=0;
	printf("Enter marks: ");
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++){
		sum=sum+a[i];
	}
	avg=(float)(sum/5);
	printf("The avg is %f",avg);
	
	return 0;
}
