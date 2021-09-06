#include<iostream>
using namespace std;
int a,b,h,t;
int s[30][30][30];
int main()
{
  	cin>>a>>b>>h>>t;
  	for(int i=1;i<=t;i++)
  	{
      	int x1,y1,z1,x2,y2,z2;
      	cin>>x1>>y1>>z1>>x2>>y2>>z2;
      	for(int i=x1;i<=x2;i++)
          	for(int j=y1;j<=y2;j++)
              	for(int k=z1;k<=z2;k++)
                    if(s[i][j][k]==0)
                      	s[i][j][k]=1;
    }
    int ans=0;
    for(int i=1;i<=a;i++)
				for(int j=1;j<=b;j++)
						for(int k=1;k<=h;k++)
								if(s[i][j][k]==0)
									ans++;
		cout<<ans;
  	return 0;
}
