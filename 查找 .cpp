#include<cstdio>
#include<algorithm>
using namespace std;
const int MAXN=1e6+10;
int read(){
	int x=0,f=1;
	char c=getchar();
	while(c<'0'||c>'9'){
		if(c=='-') f=-1;
		c=getchar();
	}
	while(c>='0'&&c<='9'){
		x=x*10+c-'0';
		c=getchar();
	}
	return x*f;
}
int a[MAXN];
int main(){
	int n=read(),m=read();
	for(int i=1;i<=n;i++) a[i]=read();
	while(m--){
		int x=read();
		int ans=lower_bound(a+1,a+n+1,x)-a;
		if(x!=a[ans]) printf("-1 ");
		else printf("%d ",ans);
	}
	return 0;
}
