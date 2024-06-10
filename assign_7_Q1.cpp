#include<iostream>
using namespace std;
class time{
	int h,m,s;
	public: 
	time(int a, int b, int c){
		h=a;
		m=b;
		s=c;
	}
	
	time(){}
	
	time operator+(time obj){
		time temp;
		temp.h=this->h+obj.h;
		temp.m=this->m+obj.m;
		temp.s=this->s+obj.s;
		if(temp.s){
			temp.m+=temp.s/60;
			temp.s=temp.s%60;
		}
		
		if(temp.m>60){
			temp.h+=temp.m/60;
			temp.m=temp.m%60;
		}
		
		
		return temp;
		
	}
	
	void show(){
		cout<<"hours: "<<h<<"minutes: "<<m<<"seconds: "<<s<<endl;
	}
};

int main(){
	time t1(5,15,34),t2(9,53,58),t3;
	t3=t1+t2;
	t3.show();
	return 0;
}
