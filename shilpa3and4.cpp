#include <stdio.h>

main()
{
int num[100], mul3, mul4, count3, count4, i;
printf("Enter num:%d\n", num);
scanf("%d",&num);
count3=0;
count4=0;
mul3=0;
while(i<100)
{
scanf("%d",&num[i]);
mul3=num[i]%3;
if(mul3=0)
{
count3++;
}
else
{
count4++;
}
i++;
}

scanf("%d",&count3);
printf("Total number of multiplier of 3 in array is:%d\n", count3);
scanf("%d",&count4);
printf("Total number of multiplier of 4 in array is:%d\n", count4);

}
