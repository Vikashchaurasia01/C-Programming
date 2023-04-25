#include<stdio.h>
//void fun(int*,int*);

void fun(int*x,int*y)
{
	*x=7;
	*y=5;
	printf("x=%d y=%d\n",x,y);	
}
int main()
{
	int x,y;
	fun(&x,&y);
	printf("x=%d y=%d \n",x,y);
}
