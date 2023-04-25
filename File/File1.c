#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	FILE *fp=NULL;
	char str[100];
	int i;
	fp=fopen("abc.txt", "w");
	
	if(fp==NULL)
	{
		printf("error");
		exit(1);
	}
	printf("Enter the character: \n");
	gets(str);
	for(i=0;i!=strlen(str);i++)
	{
		fputs(str,fp);
	fclose(fp);
	}
}
