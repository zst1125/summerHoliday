#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n-1];
	int i;
	for(i=0;i<n-2;i++)
	cin>>a[i];
	int m=2;
	while(m<=sqrt(n))
	{
		for(i=0;i<n-2;i++)
		{
			if(a[i]%m==0&&a[i]!=m)
			a[i]=0;
		}
		m++;
	}
	for(i=0;i<n-2;i++)
	{
		if(a[i]!=0)
		cout<<a[i]<<" ";
	}
	return 0;
}
