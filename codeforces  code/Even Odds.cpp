#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,k;
	cin>>n>>k;
	vector<long long int>v;
	for(long long int i=1;i<=n;i+=2)
	{
		v.push_back(i);
	}
	for(long long int j=2;j<=n;j+=2)
	{
		v.push_back(j);
	}
	if(n%2==0)
	{
		if(n==k)
		cout<<n;
		if(k==1)
		cout<<1;
	}
	else if(n%2!=0)
	cout<<n-1;
	else
	{
		for(long long int i=0;i<v.size();i++)
		{
			if(i==k)
			cout<<v[i-1];
		}
	}
	return 0;
}
