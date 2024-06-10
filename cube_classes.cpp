#include<iostream>
using namespace std;
class test{
	int side;
	public: 
	void cube(){
		cout<<"Enter side: "<<endl;
		int cube;
		cin>>side;
		cube=side*side*side;
		cout<<"Cube is: "<<cube<<endl;
		}
	};
	
	int main(){
		test obj;
		obj.cube();
		return 0;
	}

