//#include<iostream>
//using namespace std; 
//struct rect{
//	int length; 
//	int breadth;
//};
//int main(){
//	struct rect r1={10,5};
//	cout<<r1.length<<endl<<r1.breadth;
////	cout<<r1.breadth<<endl;
//}

//#include<iostream>
//using namespace std; 
//int main(){
//	int A[]={2,4,6,8,10};
//	int *p; 
//	p=new int[5];
//	p=A;
//	for(int i=0;i<5;i++){
//		cout<<p[i]<<endl;
//	}
//	delete [] p;
//}

//#include<iostream>
//using namespace std; 
//int main(){
//	int a=10;
//	int &r=a;
//	r++;
//	cout<<a<<endl;
//	cout<<r<<endl;
//}

#include<iostream>
#include<stdlib.h>
using namespace std; 
struct rect{
	int length;
	int breadth;
};
int main(){
	struct rect *p;
	//p= (struct rect*)malloc(sizeof(struct rect));
	p=new rect;
	p->length=20;
	(*p).breadth=10;
	cout<<p->length<<endl<<p->breadth<<endl;
}
