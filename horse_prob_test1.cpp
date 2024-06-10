#include<iostream>
using namespace std; 
int main(){
	int arr[25],a[5],b[5],c[5],d[5],e[5];
	int i=0;
	int j;
	int x=1;
	int n,m;
	cout<<"Enter numbers: ";
	for(i=0;i<25;i++){
		cin>>arr[i];
	}
	i=0;
	for(x=1;x<6;x++){
	n=5*x;
	i=0,m=0;
	for(i=5*(x-1);i<(5*x)-1;i++){
		for(j=i+1;j<(5*x);j++){
			if(arr[j]<arr[i]){
				int temp;
				temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}
		}
	}
	if(x==1){
		for(m=0;m<5;m++){
			a[m]=arr[m+5*(x-1)];
			cout<<endl;
			cout<<a[m]<<endl;
		}
	}
	
	if(x==2){
		for(m=0;m<5;m++){
			b[m]=arr[m+5*(x-1)];
			cout<<endl;
			cout<<b[m]<<endl;
		}
	}
	
	if(x==3){
		for(m=0;m<5;m++){
			c[m]=arr[m+5*(x-1)];
			cout<<endl;
			cout<<c[m]<<endl;
		}
	}
	
	if(x==4){
		for(m=0;m<5;m++){
			d[m]=arr[m+5*(x-1)];
			cout<<endl;
			cout<<d[m]<<endl;
		}
	}
	
	if(x==5){
		for(m=0;m<5;m++){
			e[m]=arr[m+5*(x-1)];
			cout<<endl;
			cout<<e[m]<<endl;
		}
	}
}
	
/*	
	cout<<endl;
	i=0;
	for(i=0;i<25;i++){
		cout<<arr[i]<<endl;
	}
*/
}
