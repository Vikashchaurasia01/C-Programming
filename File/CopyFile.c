#include<stdio.h>
#include<stdlib.h>
int main()
{
   FILE *fp1, *fp2;
   int ch;
   fp1 = fopen("abc.txt", "r");
   fp2 = fopen("newText.txt", "w");
   if (fp1 == NULL || fp2 == NULL) 
   {
      printf("Cannot open the file for reading ");
      exit(1);
   }
   else
   {
   	  while((ch = fgetc(fp1)) != EOF)
   	  fputc(ch,fp2);
   	  
   	  printf("file copied: ");
   	  fclose(fp1);
   	  fclose(fp2);
   }
   return 0;
}
