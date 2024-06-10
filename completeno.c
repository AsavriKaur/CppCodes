#include<stdio.h>
int main()
{
	int i,n,sum,sum2;
	printf("Enter number: ");
	scanf("%d",&n);
	sum=0;
	for(i=1;i<=n;i++){
		if(n%i==0) {
		printf("%d is divisor",i);
		sum=sum+i;
}
	}
	
	printf("%d is sum",sum);
	sum2=2*n;
	
	if(sum==sum2){
		printf("Is complete");
	}
	else{
		printf("incomplete");
	}
}
