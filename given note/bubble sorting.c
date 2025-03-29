
#include<stdio.h>
int main()
{
    int arr[5],i,j,t;
    for(i=0;i<5;i++);
         printf("Enter 5 elements :\n");
         scanf("%d",arr+i);
}
    for(i=0;i<5-1;i++)
    {
        for(j=0;j<5-i-1;j++)
        {
            if(arr[j]>arr[j+1])


     {

    t=arr[j];
    arr[j]=arr[j+1];
    arr[j+1]=t;
        }
       }
      }
        printf("Sorted array :\n");
        for(i=0;i<5;i++)  {
            printf("%d",arr[i]);
        }
        printf("\n");
}
