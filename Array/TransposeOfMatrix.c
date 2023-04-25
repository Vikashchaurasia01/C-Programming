#include <stdio.h>
#include <conio.h>
int main()
{
	int matrix[3][3],i,j,trans_mat[3][3];
	printf("enter the 3*3 matrix elements:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		scanf("%d",&matrix[i][j]);
	    }
	}
	printf("\nOriginal matrix is:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		   printf("%d ",matrix[i][j]);
	    }
	    printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		  trans_mat[i][j] = matrix[j][i];
	    }
	}
	printf("\n transpose of given matrix is:\n");
	for(j=0;j<3;j++)
	{
		for(i=0;i<3;i++)
		{
		printf("%d ",trans_mat[j][i]);
	    }
	     printf("\n");
	}
	return 0;
}
