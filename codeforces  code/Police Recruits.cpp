#include<bits/stdc++.h>
using namespace std;
int main()
{
	int p=0,n,count=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(p==0 && a[i]<0)
		{
			count++;
		}
		else
		p+=a[i];
	}
	cout<<count;
	return 0;
}
