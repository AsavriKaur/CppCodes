#include<iostream>
using namespace std;
class test
{ 
	public:
	int num1;
	void getnum();
	void display(){
	cout<<"The sum is: "<<num1;
	}
	test sum(test&,test&){
		C3.num1=C1.num1+C2.num1;
		return C3;
	}
}C1,C2,C3;	

	void test::getnum(){
		{
		cout<<"Enter numbers: ";
		cin>>num1;
		}
	}
	int main(){
		C1.getnum();
		C2.getnum();
		C3=C3.sum(C1,C2);
		C3.display();
		return 0;
	}

