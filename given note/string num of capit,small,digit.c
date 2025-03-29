#include<stdio.h>
int main()
{
    charstr[50];
    int capital,small,digit,i;
    i=capital=small=digit=0;
    printf("Enter a string : ");
    gets(str);
    whle(str[i]!='\0')
    {
        if(str[i]>=65 && str[i]<=90)
            capital++;

        else if (str[i]>=97 && str[i]<=122)
            small++;

        else if(str[i]>=48&& str[i]<=57)//digit ascii value
            digit++;

        i++;

    }
  printf("Number of capital letter = %d\n",capital);
   printf("Number of small letter = %d\n",small);
   printf("Number of digit  = %d\n",digit);



}
