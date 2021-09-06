#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int m,n,z,x;
	int a[10];
	cin>>m>>n;
	for(int i=0;i<10;i++)
	a[i]=0;
	while(m<=n)
	{
		z=m;
		while(z>0)
		{
			x=z%10;
			a[x]++;
			z=z/10;
		}
		m++;
	}
	for(int i=0;i<10;i++)
	cout<<a[i]<<" ";
	return 0;
}
