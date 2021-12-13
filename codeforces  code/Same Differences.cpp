#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t-->0)
	{
		int n,count=0;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			for(int j=i+1;j<=n;j++)
			{
				if(a[j]-a[i]==j-i)
				count++;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}
