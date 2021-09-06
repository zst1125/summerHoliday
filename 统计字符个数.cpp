#include<bits/stdc++.h>
using namespace std;
char a[300];
int ans,lena;
int main()
{
    gets(a);
    lena=strlen(a);
    for(int i=0;i<lena;i++)
        if(isdigit(a[i])) ans++;
    cout<<ans<<endl;
    return 0;
}
