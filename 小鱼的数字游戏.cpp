#include<iostream>
using namespace std;
int main()
{
	int n,i=0;
	int a[100];
	while(1)
	{
		cin>>n;
		if(n==0)
		break;
		else 
		{
			a[i]=n;
			i++;
		}
	}
	for(int z=i-1;z>=0;z--)
	cout<<a[z]<<" ";
	return 0;
}
