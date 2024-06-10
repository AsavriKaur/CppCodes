#include<stdio.h>
void fun(int, int);
void main()
{
	int x,y;
	x=5,y=7;
	fun(x,y);
	printf("The values in calling function are x=%d, y=%d",x,y);
}

void fun(int x, int y){
	x=7;
	y=5;
	printf("Values in called function x=%d, y=%d",x,y);
}
