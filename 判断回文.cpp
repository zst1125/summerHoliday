#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    for(int i=0,j=s.length()-1;i<=s.length()/2;i++,j--)
    {
        if(s[i]!=s[j]){
            cout<<"no"<<endl;
			return 0; 
        }
    }
    cout<<"yes"<<endl;
    return 0;
}
