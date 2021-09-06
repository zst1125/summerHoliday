#include<iostream>
using namespace std;
int main()
{
	int n,m,i,cnt,z;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	if(n>=1)
	cout<<0<<" ";
	for(m=1;m<n;m++)
	{
		z=0;
		cnt=0;
		while(z<=m)
		{
			if(a[z]<a[m])
			cnt++;
			z++;
		}
		cout<<cnt<<" ";
	}
	return 0;
}
