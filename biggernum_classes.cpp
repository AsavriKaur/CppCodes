#include<iostream>
using namespace std;
class numbers{
	int num1;
	int num2;
	public:
		void getnum(void);
		void bignum (void);
};

	void numbers::getnum(void){
		cout<<"Enter num1: ";
		cin>>num1;
		cout<<"Enter num2: ";
		cin>>num2;
	}
	
	void numbers::bignum(void){
		if(num1>num2){
			cout<<"big num is: "<<num1;
		}
		else if(num2>num1){
			cout<<"big is: "<<num2;
		}
		else cout<<"Equal";
	} 
	
	int main(){
		numbers obj;
		obj.getnum();
		obj.bignum();
		return 0;
	}
