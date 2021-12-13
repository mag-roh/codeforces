#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t-->0)
	{
		int n;
		cin>>n;
		while(n>0)
		{
			n=n-2021;
			if(n%2021!=0 && n%10==0)
			{
				n=n-2020;
			}
			else if(n%10!=0)
			{
				n=n-2021;
			}
		}
		if(n!=0)
		cout<<"NO"<<endl;
		else
		cout<<"YES"<<endl;
	}
	return 0;
}
