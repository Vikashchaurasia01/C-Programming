#include<stdio.h>
//#include<conio.h>

int fact1(num){
    if(num<1)
        return 1;
    return num*fact2(num-1);
}
int fact2(num){
    if(num<1)
        return 1;
    return num*fact1(num-1);
}

int main(){
    int i,num;
    printf("Enter the number: ");
    scanf("%d",&num);
    int ans = fact1(num);
    printf("The factorial of given num is %d",ans);
    return 0;
}