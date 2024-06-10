#include<iostream>
using namespace std;
class Complex{
	private: 
	float real;
	float img;
	
	public: 
	void set(void);
	void display(void);
	Complex sum(Complex);
}C1,C2,C3;

	void Complex::set(void){
		cout<<"Enter real and imaginary part of number: ";
		cin>>real>>img;
	}
	
	void Complex::display(){
		cout<<real<<" + "<<img<<"i"<<endl;
	}
	
	Complex Complex::sum(Complex C3){
		C3.real=C1.real+C2.real;
		C3.img=C1.img+C2.img;
		return C3;
	}
	
	int main(){
		C1.set();
		C1.display();
		C2.set();
		C2.display();
		C3=C3.sum(C3);
		C3.display();
		return 0;
	}
