#include<iostream>
using namespace std;
class student{
	protected: 
	char name[10];
	int rollno;
	public:
	void getdetails(){
		cout<<"Enter name: "<<endl;
		cin>>name;
		cout<<"Enter rollno"<<endl;
		cin>>rollno;
	}
	void displaydetails(){
		cout<<"Name and rollno is: "<<name<<" "<<rollno<<endl;
	}
};

class marks: public student{
	protected: 
	int subject1;
	int subject2;
	public: 
	void getmarks(){
		cout<<"Enter sub1 marks: "<<endl;
		cin>>subject1;
		cout<<"Enter sub2 marks: "<<endl;
		cin>>subject2;
	}
	void displaymarks(){
		cout<<"Marks in sub1 are: "<<subject1<<endl;
		cout<<"Marks in sub2 are: "<<subject2<<endl;
	}
};

class result: public marks{
	private: 
	int totalmarks;
	public: 
	void calculateresult(){
		totalmarks=subject1+subject2;
	}
	void displayresult(){
		cout<<name<<" "<<rollno<<" "<<subject1<<" "<<subject2<<" "<<totalmarks<<endl;
		if(totalmarks>=33){
			cout<<"PASS"<<endl;
		}
		else{
			cout<<"FAIL"<<endl;
		}
		//assumed that 33 is minimum passing marks
	}
	
};

int main(){
	int num,i;
	cout<<"Enter number of students: "<<endl;
	cin>>num;
	result obj[num];
	for(i=0;i<num;i++){
	obj[i].getdetails();
	obj[i].getmarks();
	obj[i].displaydetails();
	obj[i].displaymarks();
	obj[i].calculateresult();
	obj[i].displayresult();
}
	return 0;
}
