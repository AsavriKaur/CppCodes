#include<iostream>
using namespace std;
class test1{
	public: 
	void display(void){
		cout<<"A"<<endl;
	}
};

class test2{
	public: 
	void display(void){
		cout<<"B"<<endl;
	}
};

class test3: public test1, public test2{
};

	int main(){
		test3 obj;
		obj.test1::display();
		return 0;
	}
