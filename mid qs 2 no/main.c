#include <stdio.h>

int main()
{


  /* int math,phy,chem,total1,total2;
   printf("Enter marks in math :");
   scanf("%d",&math);
   printf("Enter marks in phy :");
   scanf("%d",&phy);
   printf("Enter marks in chem:");
   scanf("%d",&chem);
   total1=math+phy+chem;
    total2=math+phy;
    if((math>=65)&&(phy>=55)&&(chem>=50)&&((total1>=190)||(total2>=140)))

    printf("Eligible for CSE admission\n");
    else
      printf(" not eligible for CSE admission\n ") ;*/



/*
for(int i=1;i<=500;i++)
{

    if(i%5==0)
    {
      printf("%d\n",i) ;
    }

}
}
*/

/*
int i ;
for(i=1;i<=6;i++){
    if(i%2==1){
        printf("yes yes yes\n");

    }
    else {
        printf("no no no\n");
    }
}
}
*/

/*int i=5;
if(i!=5){
    if(i>0)
        printf("Hello!");
    else
        printf("Good Bye!");

}
else
    printf("I am a student of PU-CSE");
}
*/
/*
int test;
printf("Enter the value of test:");
scanf("%d",&test);
switch(test){
case 1:
    printf("Green/n");
    break;

case 2:
    printf("Red/n");
    break;
case 3:
    printf("Blue/n");
    break;
default:
    printf("white/n");
    break;

}

}
*/
int i,num,sum=0;
printf("Enter a number: ");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
    if(num%i==0)
    {
        sum=sum+i;
    }
    else
        continue;

}
printf("total sum of factors is %d", sum);

}
