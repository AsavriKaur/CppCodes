#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp=NULL;
	
	char str[10];
	
	fp=fopen("abc.txt","a");
	
	if(fp==NULL){
		printf("Error");
		exit(1);
	}
	
	printf("Enter string: ");
	gets(str);
	fputs(str,fp);
	
	fclose(fp);
}
