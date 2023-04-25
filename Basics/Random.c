#include <stdio.h>
int main()
{
    float x , y , sum , subtr;
    printf("Enter first number: ");
    scanf("%f", &x);
    printf("Enter second number: ");
    scanf("%f", &y);
    sum = x + y;
    printf("sum = %.1f" , sum);
    subtr = x - y;
    printf("subtr = %.1f" , subtr);
    return 0;
}