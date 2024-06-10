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
		cout<<"real: "<<real<<" img: "<<img<<endl;
	}
	complex operator+(complex c);
};

	complex complex::operator+(complex c){

		return complex((real+c.real),(img+c.img));
	}
	
	int main(){
		complex c1(2,3),c2(4,5),c3;	//6,8
		c3=c1+c2;
		c3.display();
		return 0;
	}
