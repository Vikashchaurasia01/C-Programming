#include<stdio.h>
#include<conio.h>
int main()
{
	int a[3][3],b[3][3],c[3][3],i,j;
	printf("\nEnter the values for matrix A:\n");
	for(i=0;i<3;i++)
		{
		  for(j=0;j<3;j++)
	    	scanf("%d",&a[i][j]);
        }
	printf("\nEnter the values for matrix B:\n");
	for(i=0;i<3;i++)
		{
          for(j=0;j<3;j++)
	    	scanf("%d",&b[i][j]);
	    }
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
	    	c[i][j]=a[i][j]+b[i][j];
	printf("\nThe values of matrix c are:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
	    	printf("%d ",c[i][j]);
	printf("\n");
    }
}

