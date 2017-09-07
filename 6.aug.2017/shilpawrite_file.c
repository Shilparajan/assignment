#include <stdio.h>
#include <stdlib.h>
main()
{
   char sentence[1000];
   FILE *index;

   index = fopen("file.txt", "w");
   printf("Enter a sentence:\n");
   fprintf(index,"%s", sentence);
   fclose(index);
}
