#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t-->0)
	{
		long long int n,a,b;
		cin>>n;
		a=floor(log2(n));
		b=(pow(2,a))-1;
		cout<<b<<endl;
	}
	return 0;
}
