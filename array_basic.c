#include<stdio.h>
int main()
{
	int arr[5];
	int arr2[5];
	int sum[5];
	int i;
	printf("Enter elements: ");
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter 2nd elements: ");
	for(i=0;i<5;i++){
		scanf("%d",&arr2[i]);
	}
	for(i=0;i<5;i++){
		sum[i]=arr[i]+arr2[i];
		printf("\n%d",sum[i]);
	}

}
