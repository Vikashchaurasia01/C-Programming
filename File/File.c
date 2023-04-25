#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *fp=NULL;
	char ch;
	int countch=0,countline=1;
	fp=fopen("abc.txt","r");
	if(fp==NULL)
	{
		printf("\nerror in opening the file");
		exit(1);
	}
	ch=fgetc(fp);
	while(ch!=EOF)
	{
	    if(ch==' ' || ch=='\n')
	      countline++;
	    else
	      countch++;
	}
	printf("no. of line = %d \n",countline);
	printf("no. of character = %d",countch);
	fclose(fp);
}
