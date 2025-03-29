#include<stdio.h>
int main()
{
    int a[10],sum=0,i;
       a[0] = 10;
       a[1] =  20;
      a[2] =   30;
       a[3] =  40;
       a[4]=50;
      a[5] =   60;
      a[6] =   70;
      a[7] =   80;
       a[8] =  90;
       a[9]=100;
       for(i=0;i<10;i++)
    {
        sum=sum+a[i];
    }
    printf("the sum is :%d\n",sum);
    printf("The average is: .2f\n",(float)sum/5);
}
