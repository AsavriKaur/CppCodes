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
	complex operator+(complex c){
		complex temp;
		temp.real=c.real+this->real;
		temp.img=c.img+this->img;
		return temp;
	}
};

int main(){
	complex c1(1,2),c2(2,3),c3;
	c3=c1+c2;	//3+i5
	c3.display();
	return 0;
}
