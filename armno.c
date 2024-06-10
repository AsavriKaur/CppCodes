#include<stdio.h>
int main(){
	int a,b,n,sum;
	sum=0;

	for(n=1;n<=500;n++){
		b=n%10;
		a=b*b*b;
		n=n/10;
		sum=sum+a;
	}
	
	if(sum==n) printf("%d is arm number",n);
}
