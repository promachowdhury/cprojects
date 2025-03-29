#include <stdio.h>

int main()
{
    double num1,num2;
    char operator;
    printf("Enter an operator (+,-,*,/): ");
    scanf("%c",&operator);

    printf("Enter two operands: ");
    scanf("%lf %lf",&num1,&num2);

    switch(operator)
        {
            case '+':
        {
            printf("%.2lf + %.2lf = %.2lf\n",num1,num2,num1+num2);
            break;
        }
        {
            case '-':

            printf("%.2lf - %.2lf = %.2lf\n",num1,num2,num1-num2);
            break;
        }

        {
            case '*':
            printf("%.2lf * %.2lf = %.2lf\n",num1,num2,num1*num2);
            break;
        }
        {

            case '/':
            printf("%.2lf / %.2lf = %.2lf\n",num1,num2,num1/num2);
            break;
        }
         default:
            printf("not a valid operator");

}
    return 0;
}
