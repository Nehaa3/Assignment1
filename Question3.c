#include<stdio.h>

int main()
{
    int m,n;
    printf("Enter the Order of matrix\n");
    scanf("%d %d",&m,&n);
    int a[m][n];
    printf("Enter the elements of array\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    }
    int p=m*n;
    int b[p],c=0;
    printf("The Inital Array is:\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            b[c]=a[i][j];
            c++;
        }
    }
    printf("\n The Final 1D array is:\n");
    for(int i=0;i<p;i++)
        printf("%d ",b[i]);
}
