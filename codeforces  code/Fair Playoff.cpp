#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t-->0)
	{
		int a[4],sum=0,b,c,d,e;
		for(int i=0;i<4;i++)
		{
			cin>>a[i];
			sum+=a[i];
		}
		b=max(a[0],a[1]);
		c=max(a[2],a[3]);
		e=sum-b-c;
		sort(a,a+4);
		d=sum-(a[2]+a[3]);
		if(e==d)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
