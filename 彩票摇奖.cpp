#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n,i,j,k,cnt=0;
	cin>>n;
	int a[n][7];
	int b[7];
	int c[8];
	for(i=0;i<7;i++)
		cin>>b[i];
	for(i=0;i<n;i++)
	for(j=0;j<7;j++)
		cin>>a[i][j];
	for(i=1;i<8;i++)
		c[i]=0;
	for(i=0;i<n;i++)
	{
		cnt=0;
		for(j=0;j<7;j++)
		{
			for(k=0;k<7;k++)
			{
				if(a[i][j]==b[k])
				cnt++;
			}
		}
		c[cnt]++;
	}
	for(i=7;i>=1;i--)
	cout<<c[i]<<" ";
	return 0;
}
