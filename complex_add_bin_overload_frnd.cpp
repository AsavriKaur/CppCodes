//overload binary plus complex 
#include<iostream>
using namespace std; 
class complex{
	int real;
	int img;
	public: 
	complex(int a, int b){
		real=a;
		img=b;
	}
	void display(){
		cout<<real<<" + i"<<img;
	}
	complex(){}
	
	friend complex operator+(complex m, complex n);
};

	complex operator+(complex m, complex n){	
		complex temp;
		temp.real=m.real+n.real;
		temp.img=m.img+n.img;
		return temp;
	}
int main(){
	complex c1(1,2),c2(2,3),c3;
	c3=c1+c2;	//3+i5
	c3.display();
	return 0;
}
