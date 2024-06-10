#include<iostream>
using namespace std; 
class polygon{
	protected: 
	int width; 
	int height;
	public: 
	void set_val(int a, int b){
		width=a;
		height=b;
	} 
	virtual void calculate_area();	//key learning 
};

class rect: public polygon{
	public: 
	void calculate_area(){
	cout<<"Area is: "<<width*height;
	}
};

class triangle: public polygon{
	public: 
	void calculate_area(){
	cout<<"Area is: "<<(1/2)*width*height;
	}
};

int main(){
	polygon *ptr;
	rect obj1;
	obj1.set_val(2,2);
	ptr=&obj1;
	(ptr)->calculate_area();
	
	triangle obj2;
	obj2.set_val(2,2);
	ptr=&obj2;
	(ptr)->calculate_area();
	delete ptr;
	return 0;
}
