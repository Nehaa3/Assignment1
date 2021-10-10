#include<stdio.h>

int main()
{
    char a[1000];
    scanf("%s",a);
    int i=0,k=0,count=0,m=-1,n=-1;
    while(a[i]!='\0')
    {
        if((a[i]>='A' && a[i]<='Z') || (a[i]>='a' && a[i]<='z') || (a[i]>='0' && a[i]<='9'))
            k=1;
        else if((a[i]=='.' || a[i]=='-'  || a[i]=='_' || a[i]=='@') && (i!=0 && a[i+1]!='\0'))
            k=1;
        else
        {
            k=-1;
            break;
        }
        if(a[i]=='@')
        {
            count++;
            m=i;
        }
        if(count>1)
        {
            k=-1;
            break;
        }
        if(a[i]=='.')
        {
            n=i;
        }
        i++;
    }
    if(n-m<2)
        k=-1;
    if(k==1)
        printf("The Email address is Valid\n");
    else
        printf("The Email address is Invalid\n");
}
