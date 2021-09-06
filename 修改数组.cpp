#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int n;
		scanf("%d",&n);
		int cnt=0;
		for(int i=1;i<=n;++i)
		{
			int x;
			scanf("%d",&x);
			cnt+=x;
		}
		printf("%d\n",cnt);
		for(int i=1;i<=n;++i)
			printf("1%c",i<n?' ':'\n');
	}
	return 0;
}
