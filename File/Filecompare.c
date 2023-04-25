#include<stdio.h>
#include<stdlib.h>
int main()
{
   FILE *fp1, *fp2;
   int ch1, ch2;
   fp1 = fopen("abc.txt", "r");
   fp2 = fopen("New.txt", "r");
 
   if (fp1 == NULL && fp2 == NULL) 
   {
      printf("Cannot open the file for reading ");
      exit(1);
   } 
   else 
   {
      while ((ch1 != EOF) && (ch2 != EOF) && (ch1 == ch2))
	  {
         ch1 = getc(fp1);
         ch2 = getc(fp2);
      }
      if (ch1 == ch2)
         printf("Files are identical");
      else
      {
         printf("Files are Not identical");
      }
	  fclose(fp1);
      fclose(fp2);
   }
   return (0);
}
