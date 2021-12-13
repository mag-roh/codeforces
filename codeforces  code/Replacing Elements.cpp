#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,d,flag=0;
		cin>>n>>d;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			for(int j!=i;j<=n;j++)
			{
				for(int k!=j;k<=n;k++)
				{
					a[i]=a[j]+a[k];
				}
			}
			if(a[i]<=d)
			flag=1;
		}
		if(flag==1)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
	return 0;
}
