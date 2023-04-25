#include<stdio.h>
int main()
{
	int a,b,c;
	printf("\n enter value");
	scanf("%d%d%d",&a,&b,&c);
	
	if((a>b)&&(a>c))
	printf("\n a is largest number");
	else if((b>c)&&(b>a))
	printf("\n b is ;argest number");
	else
	printf("\n c is largest number");
	return 0;
}
