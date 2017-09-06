#include <stdio.h>
//calsum function
int calsum(int temp[30], int len)
{
int sum;
sum=0;
while( len<30)
{
scanf("%d",&temp[len]);
sum=sum+temp[len];
len++;
}
return sum;
}
return type is int;

//calmax function
int calmax(int temp[30], int len)
{
int max, min;
max=min=temp[len];
len=len+1
while(len<30)
{
scanf("%d",&temp[len]);
if(temp[len]>max)
{
  max=temp[len];
  }
if(temp[len]<min)
{
  min=temp[len];
  }
  len++
}
return max;
}
   return type is int;

   //calmin function
int calmin(int temp[30], int len)
{
int max, min;
max=min=temp[len];
len=len+1;
while(len<30)
{
scanf("%d",&temp[len]);
if(temp[len]>max)
{
  max=temp[len];
  }
if(temp[len]<min)
{
  min=temp[len];
  }
len++;
}
return min;
}
   return type is int;

main()
{
int temp [30], avg1, avg2, avg3;
int sum1, sum2, sum3;
int min1, max1, min2, max2, min3, max3;
int i, j, k, l, m, n;

printf("Enter the array temp: %d \n",temp);
scanf("%d",&temp);

// To calculate avg of last 5 minutes

sum1= calsum(temp, i);// calling calsum function
avg1=sum1/5;
scanf("%d",&avg1);
printf("The avg of last 5min is;%d\n", avg1);

//To calculate max value of last 5 minutes

max1=calmax(temp, j);//function
scanf("% d",&max1);
printf("The max value in last 5min is:%d\n", max1);

// To calculate min value of last 5 minutes

min1=calmin(temp, j);//function
scanf("% d",&min1);
printf("The min value in last 5min is:%d\n", min1);

//To calculate avg of last 15 minutes

sum2= calsum(temp, k);// calling calsum function
avg2=sum2/15;
scanf("%d",&avg2);
printf("The avg of last 15min is;%d\n", avg2);

//To calculate max value of last 15 minutes

max2=calmax(temp, l);//function
scanf("% d",&max1);
printf("The max value in last 15min is:%d\n", max2);

// To calculate min value of last 15 minutes

min2=calmin(temp, l);//function
scanf("% d",&min2);
printf("The min value in last 15min is:%d\n", min2);

//To calculate avg of last 30 minutes

sum3= calsum(temp, m);// calling calsum function
avg3=sum3/30;
scanf("%d",&avg3);
printf("The avg of last 30min is;%d\n", avg3);

//To calculate max value of last 30 minutes

max3=calmax(temp, n);//function
scanf("% d",&max3);
printf("The max value in last 30min is:%d\n", max3);

// To calculate min value of last 5 minutes

min3=calmin(temp[30], n);//function
scanf("% d",&min3);
printf("The min value in last 30min is:%d\n", min3);
}




