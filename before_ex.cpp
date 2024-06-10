#include<iostream>
using namespace std;
class test{
	int x;
	int y;
	public: 
	test(int a){
		x=a;
	}
	
	test(){
		x=0;
	}
	void show(){
		cout<<x<<endl;
	}
	void *operator new(size_t size);
	void operator delete(void *p);
	
};

	void *test::operator new(size_t size){
		cout<<"in new"<<endl;
		void *p= ::operator new(size);
		return p;
	}

	void test::operator delete(void *p){
		cout<<"in delete";
		delete(p);
	}

int main(){
	test *obj;
	obj=new test(2);
	obj->show();
	delete(obj);
	return 0;
}
