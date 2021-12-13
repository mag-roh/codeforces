#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,max,sum=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	max=a[0];
	if(n!=1)
	{
		for(int i=0;i<n;i++)
		{
			sum+=a[i];
			if(a[i]>max)
			{
				max=a[i];
			}
		}
		cout<<max*n-sum;
	}
	else
	cout<<0;
	return 0;
}
