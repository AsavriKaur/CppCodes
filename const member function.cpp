#include<iostream>
using namespace std;
class test{
	int num1;
	static int num2,num3;
	public: 
	void getnum();
	void display(test) const;
};

	int test::num2=2;
	int test::num3=3;
	
	void test::display(test obj) const{
		cout<<obj.num2+obj.num3;
	}
	
	int main(){
		test obj;
		obj.display(obj);
		return 0;
	}
