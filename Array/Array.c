#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n;
	int marks[30];
	float avg,sum=0;
	printf("enter the number of subjects\n");
	scanf("%d",&n);
    	for(i=1;i<=29;i++)
    	{
    		printf("enter the marks\n");
    		scanf("%d,&marks[i]");
    	    sum=sum+marks[i];
		}
			printf("the marks input are:\n");
		    for(i=0;i<=29;i++)
		{
			printf("%d\n",marks[i]);
		}
		avg=sum/n;
		printf("average is %f\n",avg);
		return 0;
}
