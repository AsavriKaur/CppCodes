#include<iostream>
using namespace std; 

struct rect{
	int l; 
	int b;
};

void change(struct rect *p, int l1){
	p->l=l1;
}

int main(){
	struct rect r2={10,5};
	change(&r2, 100);
	cout<<r2.l<<endl<<r2.b;
	return 0;
}
