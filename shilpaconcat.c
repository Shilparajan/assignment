#include <stdio.h>

int main(void)
{
char firstname[], lastname[], fullname[];
printf("Enter firstname:%s\n", firstname);
scanf("%s",&firstname);
  printf("Enter lastname:%s\n",lastname);
scanf("%s",&lastname);
fullname=strcat(firstname, lastname);
scanf("%s",&fullname);
  printf("full name is:%s\n", fullname);
}

