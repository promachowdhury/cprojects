 #include<stdio.h>//string reverse korle same asle
int main()
{
    char str1[30]="emu chy";
    char str2[30];
    int i=0,len=0,j;
    while(str1[i]!='\0')
    {
        i++;
        len++;

    }
    for(j=0,i=len-1;i>=0;i--,j++)//strin 1 er value shesh theke start tai len-1
    {
        str2[j] = str1[i];
    }
    str2[j]='\0';

    printf("str1 = %s\n",str1);
    printf("str2 = %s\n",str2);

}
