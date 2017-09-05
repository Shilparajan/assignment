#include <stdio.h>
main()
{
int num[10], largest, i;
printf("Enter the array num:%d\n", num);
  scanf("%d",&num);
largest= num[0];
i=1;
while( i<10)
{
scanf("%d",&num[i]);
if(num[i]>largest)
{
largest= num[i];
}
i++;
}
scanf("%d",&largest);
printf("The largest value in the given array is:%d\n", largest);
}
