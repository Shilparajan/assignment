#include <stdio.h>

main()
{
int polval[31], max,min, i, initial, daymax, daymin;
printf("Enter polval:%d\n", polval);
scanf("%d",&polval);
max=min=polval[0];
i=1;
while(i<31)
{
scanf("%d",&polval[i]);
if(polval[i]>max)
{
max=&polval[i];
}
if(polval[i]<min)
{
min=&polval[i];
}

i++;
}
initial=&polval[0];
daymax=(max-initial)+1;
daymin=(min-initial)+1;
scanf("%d",&daymax);
printf("The  pollution was maximum on aug:%d", daymax);
scanf("%d",&daymin);
printf("The  pollution was minimum on aug:%d", daymin);
}
