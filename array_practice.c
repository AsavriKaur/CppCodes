#include<stdio.h>
int main()
{
	int arr1[3][3],arr2[3][3],sum[3][3];
	int i,j;
	printf("Enter elements: ");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&arr1[i][j]);
		}
	}
	
	printf("Enter elements: ");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			arr2[i][j]=arr1[i][j];
		}
	}
	
	printf("transpose is: ");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			arr1[i][j]=arr2[j][i];
			printf("%d",arr1[i][j]);
		}
	}
}
