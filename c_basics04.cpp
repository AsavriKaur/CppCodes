#include<iostream>
using namespace std; 
template <class T>
class arithematic{
	T a;
	T b;
	public: 
	arithematic(T a, T b);
	T add();
	T sub();
};
	template <class T>
	arithematic<T>::arithematic(T a, T b){
		this->a=a;
		this->b=b;
	}
	template <class T>
	T arithematic<T>::add(){
		return (a+b);
	}
	template <class T>
	T arithematic<T>::sub(){
		return (a-b);
	}
	
int main(){
	arithematic<int> arr(10,5);
	cout<<arr.add()<<endl;
	arithematic<float> arr1(3.5,2.5);
	cout<<arr1.sub();
	return 0;
}
