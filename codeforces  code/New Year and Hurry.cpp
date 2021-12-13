#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,sum=0,count=0;
	cin>>n>>k;
	if(k==240)
	{
		cout<<0;
	}
	else
	{
		for(int i=1;i<=n;i++)
		{
			sum+=(5*i);
			if(sum+k<=240)
			{
				count++;
			}
		}
		cout<<count;
	}
	return 0;
}
