#include<stdio.h>
//void subtr(void)
//void sum(void)
//void mult(void)
void divide(void)
{
   int a,b;
   //int sum=0;
   //int mult=0;
   //int subtr=0;
   float divide=0;
   printf("enter the value");
   scanf("%d%d",&a,&b);
   //sum=a+b;
   //subtr=a-b;
   //mult=a*b;
   divide=a/b;
   //printf("sum = %d \n",sum);
   //printf("multiplication = %d \n",mult);
   //printf("subtraction = %d \n",subtr);
   printf("divide = %f \n",divide);
}
int main()
{
	//sum();
	//mult();
	//subtr();
	divide();
	return 0;
}
