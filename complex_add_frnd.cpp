#include<iostream>
using namespace std;
class complex{
	int real;
	int img;
	public: 
	complex(){}
	complex(int a, int b){
		real=a;
		img=b;
	}
	void display(){
		cout<<"real: "<<real<<" "<<"img: "<<img<<endl;
	}
	
	friend complex operator+(complex a, complex b);
};

	complex operator+(complex a, complex b){
		return complex((a.real+b.real),(a.img+b.img));
	}
	
	int main(){
		complex c1(2,3),c2(4,5),c3;
		c3=c1+c2;
		c3.display();
	}
