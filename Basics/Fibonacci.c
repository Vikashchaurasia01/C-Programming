#include<stdio.h>

int fibonacci(int term){
    if(term == 1 || term == 2)
        return 1;
    int ans = fibonacci(term-1)+fibonacci(term-2);
    return ans;
}

int main(){
    int num,i;
    printf("Enter the nmumber: ");
    scanf("%d", &num);
    for ( i = 1; i < num; i++)
        printf("%d\t",fibonacci(i));
    return 0;
}