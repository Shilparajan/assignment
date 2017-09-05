#include <stdio.h>
#include<string.h>
int main(void)
{
int stringlen;
char str[5];
printf("Enter string: %s\n", str);
scanf("%s",&str);
stringlen=strlen(str);
scanf("%d",&stringlen);
printf("The length of string is:%d\n", stringlen);
}
