#include <stdio.h>

int main()
{
    float F,C;

    printf("Enter f = ");
    scanf("%f",&F);

    C = (F-32)/1.8 ;
     printf("C: %.2f\n",C);

    return 0;
}
