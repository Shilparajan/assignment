#include <stdio.h>
main()
{
FILE *index;
char readfile[100], reg[100];
index=Fopen(readfile,"r");
fscanf(index,"%s",reg);
printf("Data read from the file is:%s\n", reg);
fclose(index);
}
