
#include<stdio.h>
#include<math.h>
int main()
{
   double x = 5.35;// .1-.4 no change but .5 ( +1 add)

   double result= round(x);

   printf("round(%lf) = %lf\n",x,result);

    return 0;
}
