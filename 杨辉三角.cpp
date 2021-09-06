#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int i,j,n;
    cin>>n;
    int a[n][n];
    for(i=0;i<n;i++)
    {
        a[i][i]=1;
        a[i][0]=1;
    }
    for(i=2;i<n;i++)
    {
        for(j=1;j<=i-1;j++)
        {
            a[i][j]=a[i-1][j-1]+a[i-1][j];
        }

    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%d ",a[i][j]);
        }
        cout<<endl;
    }
    return 0;
}
