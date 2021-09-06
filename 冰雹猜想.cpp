#include<iostream>
using namespace std;
int main()
{
	int n,i=0;
	cin>>n;
	int a[100];
	while(n!=1)
	{
		a[i]=n;
		i++;		
		if(n%2==1)
			n=3*n+1;
		else
			n=n/2;
	}
	cout<<"1 ";
	for(int z=i-1;z>=0;z--)
	cout<<a[z]<<" ";
	return 0;
}
