#include<stdio.h>
#include<math.h>
//long long convert(int);
int main()
{
	int n,bin;
	printf("enter a decimal number: ");
	scanf("%d",&n);
	bin = convert(n);
	printf("%d in decimal = %d in binary",n,bin);
	return 0;
}
convert(int n) {
	long bin=0;
	int rem,i=1;
	while (n!=0)
	{
		rem =n%2;
		n/=2;
		bin += rem*i;
		i *= 10;
	}
	return bin;
}
