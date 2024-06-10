#include<iostream>
using namespace std;
class test{
	int num;
	public: 
	test(){
	}
	setval(int a){
		num=a;
	}
	test(test &t){
		num=t.num;
	}
	void display(void){
		cout<<"num is: "<<num<<endl;
	}
};

	int main(){
		test obj1;
		obj1.setval(10);
		obj1.display();
		test obj2(obj1);
		obj2.display();
		return 0;
	}
