#include<iostream>
using namespace std;
int main()
{
	int n,k,flag=1;
	int cnt=0;
	cin>>n;
	int a[n][4];
	int i,j;
	for(i=0;i<n;i++)
	for(j=0;j<3;j++)
	cin>>a[i][j];
	for(i=0;i<n;i++)
	a[i][3]=a[i][0]+a[i][1]+a[i][2];
	for(i=0;i<n-1;i++)
	{
		flag=1;
		for(k=i+1;k<n;k++)
		{
			flag=1;
			for(j=0;j<3;j++)
			{
				if(a[i][j]-a[k][j]>5||a[k][j]-a[i][j]>5)
				flag=0;
			}
			if(a[i][3]-a[k][3]>10||a[k][3]-a[i][3]>10)
			flag=0;
			if(flag==1)
			cnt++;
		}
		
	}
	cout<<cnt;
	return 0;
}
