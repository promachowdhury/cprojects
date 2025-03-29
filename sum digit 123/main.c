#include <stdio.h>

int main()
{
    int number,sum=0,temp,remainder;
    printf("Enter any number : ");
    scanf("%d",&number);
    temp = number;

    while(temp!=0){

        remainder = temp % 10;//123 jotokkhon na vagfol 0 hoi colbe
        sum=sum + remainder;
        temp = temp /10 ;
    }
    printf("sum of digits = %d\n",sum);
    return 0;
}
