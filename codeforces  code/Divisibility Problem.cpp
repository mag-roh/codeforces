#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int a,b,c,d;
		cin>>a>>b;
		if(a>b)
		{
			c=a%b;
			if(c==0)
			{
				 cout<<0<<endl;
			}
			else
			{
				d=b-c;
				cout<<d<<endl;
			}
		}
		else
		cout<<b-a<<endl;
	}
	return 0;
}
