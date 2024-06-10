#include<iostream>
#include<string.h>
using namespace std;
int main(){
	char *ptr[5]=
	{
		"bat",
		"cat",
		"sat"
	};
	char str[5];
	cout<<"Enter str: "<<endl;
	cin>>str;
	int i=0;
	for(i=0;i<4;i++){
		if(strcmp(str,*ptr[i])==0){
			cout<<"present";
			break;
		}
		else if(i==4){
			cout<<"absent";
		}
	}
	return 0;
}
