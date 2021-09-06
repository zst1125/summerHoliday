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
	for(i=0;i<n;i++)
	{
		if(a[i]==x)
			{
				cout<<i;
				return 0;
			}
	}		
	cout<<"-1";

	return 0;
}
