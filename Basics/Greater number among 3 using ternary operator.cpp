#include<stdio.h>
int main()
{
	int a,b,c,max;
	printf("\n enter three values: ");
	scanf("%d%d%d",&a,&b,&c);
	
	max=a>b?(a>c?a:c):(b>c?b:c);
	printf("\n Largest among three numbers=%d",max);
	return 0;
}

