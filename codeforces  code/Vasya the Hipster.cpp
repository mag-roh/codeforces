#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c,d;
	cin>>a>>b;
	if(a>b)
	{
		c=a-b;
		cout<<b<<" ";
	}
	else
	{
		c=b-a;
		cout<<a<<" ";
	}
	d=c/2;
	cout<<d;
	return 0;
}
