#include<stdio.h>
#include<math.h>
int main()
{
   double x = 5.36 ;

   double result = round(x);// 5.4 value no change ( 5.5+1)

   printf("round(%lf)=%lf\n",x,result);

    return 0;
}
