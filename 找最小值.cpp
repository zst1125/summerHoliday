#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int i;
    for(i=0;i<n;i++)
    cin>>a[i];
    int x=a[0];
    for(i=1;i<n;i++)
    x=x>=a[i]?a[i]:x;
    cout<<x;
    return 0;
}
