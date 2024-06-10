//WAP to write 1 to 200 in a file num.txt 

#include<iostream>
#include<fstream>
using namespace std; 
int main(){
	fstream fobj("NUM.txt",ios::out);	//constructor method 
	//fobj.open("num.txt",ios::out);
	if(!fobj){
		cout<<"file not open"<<endl;
	}
	int i;
	for(i=1;i<=200;i++){
		fobj<<i<<endl;	//cout<<i;
	}
	fobj.close();
	return 0;
}
