#include <stdio.h>

int main()
{
int amount;
int n1000,n500,n100,n50,n20,n10,n5,n2,n1;
n1000=n500=n100=n50=n20=n10=n5=n2=n1=0;
printf("Enter the amount : ");
scanf("%d",&amount);
if(amount>0)
{
    n1000=amount/1000;
    amount-=n1000*1000;
}if(amount>0)
{
  n500=amount/500;
  amount-=n500*500;
}
if(amount>0)
{
  n100=amount/100;
  amount-=n100*100;
}

if(amount>0)
{
  n50=amount/50;
  amount-=n50*50;
}

if(amount>0)
{
  n20=amount/20;
  amount-=n500*20;
}

if(amount>0)
{
  n10=amount/10;
  amount-=n10*10;
}if(amount>0)
{
  n5=amount/5;
  amount-=n5*5;
}

if(amount>0)
{
  n2=amount/2;
  amount-=n2*2;
}


  if(amount>0)
{
  n1=amount/1;
  amount-=n1*1; }
 printf("Num of 1000tk=%d",n1000) ;
 printf("Num of 500tk=%d",n500) ;
 printf("Num of 100tk=%d",n100) ;
 printf("Num of 50tk=%d",n50) ;
 printf("Num of 20tk=%d",n20) ;
 printf("Num of 10tk=%d",n10) ;
 printf("Num of 5tk=%d",n5) ;
 printf("Num of 2tk=%d",n2) ;
 printf("Num of 1tk=%d",n1) ;


    return 0;
}

