#include<iostream>
using namespace std;
int main()
{
	int a,b,c,index;
	cin>>a>>b;
	while(a%b!=0)
	{
		c=a%b;
		a=b;
		b=c;
	}
	cout<<b;
	return 0;
}
