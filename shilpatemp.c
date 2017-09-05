#include <stdio.h>

//calsum function
int calsum(int temp[15], int len)
{
int sum;
sum=0;
while( len<15)
{
scanf("%d",&temp[len]);
sum=sum+temp[len];
len++;
}
return sum;
}

//calmax function
int calmax(int temp[15], int len)
{
int max, min;
max=min=temp[len];
len=len+1;
while(len<15)
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
return max;
}

   //calmin function
int calmin(int temp[15], int len)
{
int max, min;
max=min=temp[len];
len=len+1;
while(len<15)
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



main()
{
int temp [15], avg1, avg2, avg3;
int sum1, sum2, sum3;
int min1, max1, min2, max2, min3, max3;
int i, j, k, l, m, n;

printf("Enter the array temp: \n");
while(i<15)
{
scanf("%d",&temp[i]);
i++;
}

// To calculate avg of last 5 minutes
i=10;
sum1= calsum(temp, i);// calling calsum function
avg1=sum1/5;
scanf("%d",&avg1);
printf("The avg of last 5min is;%d\n", avg1);

//To calculate max value of last 5 minutes
j=11;
max1=calmax(temp, j);//function
scanf("% d",&max1);
printf("The max value in last 5min is:%d\n", max1);

// To calculate min value of last 5 minutes
j=11;
min1=calmin(temp, j);//function
scanf("% d",&min1);
printf("The min value in last 5min is:%d\n", min1);

//To calculate avg of last 15 minutes
k=5;
sum2= calsum(temp, k);// calling calsum function
avg2=sum2/10;
scanf("%d",&avg2);
printf("The avg of last 15min is;%d\n", avg2);

//To calculate max value of last 15 minutes
l=6;
max2=calmax(temp, l);//function
scanf("% d",&max1);
printf("The max value in last 15min is:%d\n", max2);

// To calculate min value of last 15 minutes
l=6;
min2=calmin(temp, l);//function
scanf("% d",&min2);
printf("The min value in last 15min is:%d\n", min2);

//To calculate avg of last 30 minutes
m=0;
sum3= calsum(temp, m);// calling calsum function
avg3=sum3/15;
scanf("%d",&avg3);
printf("The avg of last 30min is;%d\n", avg3);

//To calculate max value of last 30 minutes
n=1;
max3=calmax(temp, n);//function
scanf("% d",&max3);
printf("The max value in last 30min is:%d\n", max3);

// To calculate min value of last 5 minutes
n=1;
min3=calmin(temp, n);//function
scanf("% d",&min3);
printf("The min value in last 30min is:%d\n", min3);
}


