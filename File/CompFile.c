#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp1,*fp2;
	char ch1,ch2;
	fp1=fopen("abc.txt","r");
	fp2=fopen("new.txt","r");
	if(fp1==NULL || fp2==NULL)
	{
		printf("unable to open the file");
		exit(0);
	}
	else
	{
	    ch1=getc(fp1);
	    ch2=getc(fp2);
	    while((ch1 != EOF) && (ch2 != EOF) && (ch1 == ch2))
	    {
	    	ch1=getc(fp1);
	        ch2=getc(fp2);
	    }
	    if(ch1==ch2)
	        printf("files are identical");
	    else
	        printf("files are not identical");
		fclose(fp1);
		fclose(fp2);
    }
}
