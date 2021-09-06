#include<iostream>
using namespace std;
int main()
{
	cout<<"输入整数a、b："<<endl;
	int a,b;
	cin>>a>>b;
	cout<<"输入正整数m："<<endl;
	int m;
	cin>>m;
	if((a-b)%m==0)
	cout<<"整数a与b对模m同余"<<endl;
	else cout<<"整数a与b对模m不同余"<<endl;
	return 0;
}
