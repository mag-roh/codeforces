#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,count=0,sum=0,b;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		sum+=a[i];
	}
	sort(a,a+n);
	for(int i=n-1;i>=0;i--)
	{
		if(a[i]<=sum)
		{
			b+=a[i];
			sum-=a[i];
			count++;
			if(b>=sum)
			{
				break;
			}
		}
	}
	cout<<count;
	return 0;
}
