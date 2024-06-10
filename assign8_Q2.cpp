#include<iostream>
#include<fstream>
using namespace std;
int main(){
	fstream fobj;
	fobj.open("test.txt",ios::out);
	if(!fobj){
		cout<<"file not opened"<<endl;
	}
	fobj<<"hello world"<<endl;//13= eof+endl
	fobj.close();
	fobj.open("test.txt",ios::in);
	char ch;
	int count=0;
	while(!fobj.eof()){
		fobj.get(ch);
		cout<<ch<<endl;
		count++;
	}
	
	cout<<"Number of characters in file is: "<<count<<endl;
	return 0;
}
