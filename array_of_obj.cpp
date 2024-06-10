#include<iostream>
using namespace std;
class rect{
	int length, breadth;
	public: 
	rect(void){
	}
	
	rect(int a, int b){
		length=a;
		breadth=b;
	}

	rect(int a){
		length=a;
		breadth=a;
	}

	void area(void){
		cout<<"Area is: "<<length*breadth<<endl;
	}
	
	~rect(){
		cout<<"Destructor called"<<endl;
	}
};

	int main(){
		rect r[3]={rect(),rect(2,3),rect(4)};
		rect().area();
		rect(2,3).area();
		rect(4).area();
		return 0;
	}
