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
	virtual void calculate_area(){};	//key learning 
};

class rect: public polygon{
	public: 
	void calculate_area(){
	cout<<"Area is: "<<width*height<<endl;
	}
};

class triangle: public polygon{
	float area;
	public: 
	void calculate_area(){
	area=(1/2.0)*width*height;
	cout<<"Area is: "<<area;
	}
};



int main()
{
	polygon *ptr;
	rect obj1;
	obj1.set_val(2,2);
	ptr=&obj1;
	ptr->calculate_area();
	
	triangle obj2;
	obj2.set_val(2,2);
	ptr=&obj2;
	ptr->calculate_area();
	delete ptr;

}

