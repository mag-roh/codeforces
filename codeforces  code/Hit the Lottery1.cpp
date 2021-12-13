#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int a[]={1,5,10,20,100};
	long long int n;
	cin>>n;
	int b[n+1];
	b[0]=0;
	for(long long int i=1;i<=n;i++)
	{
		b[i]=INT_MAX;
	}
	for(long long int i=1;i<=n;i++)
	{
		for(int j=0;j<5;j++)
			if(a[j]<i)
			{
				int res=b[i-a[j]];
				if(res!=INT_MAX && res+1<b[i])
				{
					b[i]=res+1;
				}
			}
	}
	cout<<b[n];
	return 0;
}
