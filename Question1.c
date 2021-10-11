#include<stdio.h>

int main()
{
    char a[1000];
    printf("Enter the value\n");
    scanf("%s",a);
    int i=0,m=0,n=0;
    while(a[i]!='\0')
    {
        if(a[i]=='.')
        {
            m++;
            if(a[i+1]!='\0')
            n=1;
        }
        i++;
    }
    if(m==1 && n==1)
    printf("It is Valid\n");
    else
    printf("It is Invalid\n");
}
