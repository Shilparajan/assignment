#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
int Read(FILE *ptr, int readfile[1000], int reg)
{
int arrayval[1000], i;
for(i=0;i<1000;i++);
{
     ptr=fopen(readfile,"r");
     fscanf(ptr,"%d", reg);
     arrayval[i]=reg;
   }
  fclose(ptr);
}
main(int argc, char *argv[])
{
FILE *htmlPtr ;
char fileName[10];
int  first, last, middle, search, arrayval[1000], len;
int Read(FILE *ptr, readfile[1000], reg);
if (argc > 1 )
   {
      strcpy(readfile,argv[1]);
   }
   else
   {
      printf("File name not  mentioned in the command line\n");
      exit(1);
   }
   strcpy(fileName, "/var/www/html/index.html");
   htmlPtr = fopen(fileName, "w");

   if (htmlPtr == NULL)
   {
      printf("Unable to open file %s \n", fileName);
      exit(1);
   }

   fprintf(htmlPtr,"<HTML>\n");
   fprintf(htmlPtr,"<meta http-equiv=\"refresh\" content=\"1\">\n");
   fprintf(htmlPtr,"<H1> Result of computation </H1>\n");

fprintf(htmlptr, "<p>Enter the number to be found:</p>\n");
scanf("%d",&search);
while(len<=1000)
{
arrayval[len]=read(len);
len++;
}
first=0;
last=1000-1;
middle=(first+last)/2;
while(first<=last)
   {
   if(arrayval[middle]<search)
     {
     first=middle+1;
      }
   else if(arrayval[middle]==search)
      {
      fprintf(htmlptr,"<p>%d found at location %d</p>\n", search, middle+1);
      break;
      }
     else
        {
           last=middle-1;
           middle=(first+ last)/2;
        }
    }
if(first> last)
  {
    fprintf(htmlptr,"<p>Number %d not present</p>", search);
  }
fprintf(htmlPtr,"</HTML>\n");
fclose(htmlPtr);
}

