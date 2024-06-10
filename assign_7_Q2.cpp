#include<iostream>
#include<string.h>
using namespace std;
class STRING{
	char str1[20];
	public: 
	STRING(char str_1[20]){
		strcpy(str1,str_1);
		
	}
	STRING operator==(STRING obj){
		int result;
		result=strcmp(this->str1, obj.str1);
		cout<<"Result: "<<result<<endl;
	}
	STRING operator+(STRING obj){
		strcat(this->str1,obj.str1);
		cout<<"Concatinated str is: "<<this->str1;
	}
};
		
	int main(){
		STRING obj1("hello"),obj2("world");
		obj1==obj2;
		obj1=obj1+obj2;
		
		return 0;
	}
