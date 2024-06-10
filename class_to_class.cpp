#include<iostream>
using namespace std;
class test1{
	public: 
	int num1; 
	void show(){
		cout<<num1<<endl;
	}
	test1(){}
	test1(int a){
		num1=a;
	}
	
	int getnum1(){
		return num1;
	}
};

class test2{
	public: 
	int num2; 
	void show(){
		cout<<num2<<endl;
	}
	test2(){}
	test2(int a){
		num2=a;
	}
	
	test2 operator=(test1 obj){
		test2 temp;
		num2=obj.getnum1();
		return temp;
	}
};

int main(){
	test1 obj1(22);
	obj1.show();
	test2 obj2(11);
	obj2=obj1;
	obj2.show();
	return 0;
}
