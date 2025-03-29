#include <stdio.h>
//a program that can take some num.and display maximum

/*int main()
{
    int num[100],n,i;

    printf("How many numbers: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);

    }
    int max=num[0];
    for(i=1;i<n;i++)
    {
        if(max<num[i])
            max=num[i];
    }
    printf("Maximum = %d\n",max);
    return 0;
}*/
int main()
{
    int num[100],n,i;

    printf("How many numbers: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);

    }
    int min=num[0];
    for(i=1;i<n;i++)
    {
        if(min>num[i])
            min=num[i];//max30
    }
    printf("Minimum = %d\n",min);
    return 0;
}

