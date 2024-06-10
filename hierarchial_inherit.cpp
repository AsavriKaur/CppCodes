#include<iostream>
using namespace std;
class test{
	public: 
	void display(void){
		cout<<"test"<<endl;
	}
};

class test1:public test{
	public: 
	void display1(void){
		cout<<"test1"<<endl;
	}
};

class test2:public test{
	public: 
	void display2(void){
		cout<<"test2"<<endl;
	}
};

int main(){
	test1 obj1;
	obj1.display1();
	obj1.display();
	
	test2 obj2;
	obj2.display2();
	obj2.display();
	
	return 0;
}
