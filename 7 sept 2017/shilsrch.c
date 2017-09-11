#include <stdio.h>
#include <stdlib.h>
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
main()
{
int  first, last, middle, search, arrayval[1000], len;
int Read(FILE *ptr, readfile[1000], reg);
printf("Enter the number to be found:\n");
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
      printf("%d found at location %d \n", search, middle+1);
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
    printf("Number %d not present", search);
  }

}
