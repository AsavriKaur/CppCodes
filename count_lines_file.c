#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp=NULL;
	int count=1;
	char ch;
	
	fp=fopen("abc.txt","w+");
	if(fp==NULL){
		printf("Error");
		exit(1);
	}
	
//	fprintf(fp,"%c\n%c",'a','b');
	
	while((ch=fgetc(fp))!=EOF){
		
		if(ch=='\n'){
			count=count+1;
		}
	}
	
	printf("%d is count",count);
	fclose(fp);
}
