/*#include <stdio.h>


int main()
{double base,exp,result;
    printf("Enter base = ");
    scanf("%lf",&base);

    printf("Enter exponent = ");//with lib func
    scanf("%lf",&exp);

    result = pow(base,exp);
    printf("%lf",result);
    return 0;
}*/
#include<stdio.h>
int main()


{
    double base,exp,result=1;
    printf("Enter base = ");
    scanf("%lf",&base);

    printf("Enter exponent = ");
    scanf("%lf",&exp);

  for(i=1;i<=exp;i++)
{
    result= result * base ;
}
    printf("%lf\n",result);
    return 0;
}
