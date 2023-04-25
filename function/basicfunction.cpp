#include<stdio.h>
float sum();
int main()
{
	sum();
}
float sum()
{
	float a,b;
	float sum=0;
	printf("enter two numbers");
	scanf("%f%f",&a,&b);
	sum=a+b;
	printf("sum = %f\n",sum);
}
