#include<iostream>
using namespace std;
int fun(int x)
{
	int sum=1;
	for(int i=1;i<=x;i++)
	sum=sum*i;
	return sum;
}
int main()
{
	int n,i;
	cin>>n;
	int m=n;
	int l=m;
	int cnt=1;
	while(n!=0)
	{
		if(n/10!=0)
		cnt++;
		n=n/10; 
	}
	int a[cnt];
	int k=cnt;
	while(m!=0)
	{
		for(i=cnt-1;i>=0;i--)
		{
			 a[i]=m%10;
			 m=m/10;
		}
	}
	int b[cnt];
	for(i=0;i<cnt;i++)
	b[i]=0;
	i=0;
	while(i<cnt)
	{
		for(int j=i+1;j<cnt;j++)
		{
			if(a[i]>a[j])
			b[i]++;
		}
		i++;
	}
	int sum=0;
	for(i=0;i<cnt;i++)
	{
		sum=sum+b[i]*fun(cnt-1-i);
	}
	cout<<l<<"的康托展开为："<<sum+1;
	return 0;
}

