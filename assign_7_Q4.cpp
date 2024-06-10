#include<iostream>
using namespace std;
//const int max=10;
class array{
	int arr[10];
	public: 
	array(){
		int i;
		for(i=0;i<10;i++){
			arr[i]=i+1;
		}
	}
	int &operator[](int index);
};

int& array::operator[](int index){
	if(index>10)
	{
		cout<<"arr out of bound"<<endl;
		exit(0);
	}
	return arr[index];
}

int main(){
	array a;
	cout<<a[2]<<endl;
	cout<<a[12]<<endl;
	return 0;
}
