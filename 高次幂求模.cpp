#include<iostream>
using namespace std;
quickMod(int a,int b,int c)
{
	int ans=1;
	while(b)
	{
		if(b%2==1)
		ans=(ans*a)%c;
		b/=2;
		a=(a*a)%c;
	}
	return ans;
}
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	cout<<"a^b mod c = "<<quickMod(a,b,c);
	return 0;
}
