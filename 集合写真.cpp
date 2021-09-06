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
    int x;
    cin>>x;
    int low=0;
    int high=n-1;
    int mid;
	if(x<=a[low])
    	{
    		cout<<"1"<<endl;
    		return 0;
		}
    while(low<=high)
    {
        mid=(low+high)/2;
        if(x>=a[mid])
            {
            	if(x<=a[mid+1])
            	{
            		mid=mid+2;
            		cout<<mid<<endl;
            		return 0;
				}
            	else
            	low=mid+1;
			}
        else
            high=mid-1;
    }
    cout<<n+1<<endl;
    return 0;
}
