#include<iostream>
using namespace std;
class student{
	public: 
	virtual void display(){
	};
};

class science: public student{
	public: 
	void display(){
		cout<<"Hi Science"<<endl;
	}
};

class engineering: public student{
	public: 
	void display(){
		cout<<"Hi Engineering"<<endl;
	}
};

class medicine: public student{
	public: 
	void display(){
		cout<<"Hi Medicine"<<endl;
	}
};

int main(){
	student *ptr[3];
	ptr[0]=new science;
	ptr[0]->display();
	
	ptr[1]=new engineering;
	ptr[1]->display();
	
	ptr[2]=new medicine;
	ptr[2]->display();
	
	delete *ptr;
	return 0;
}
