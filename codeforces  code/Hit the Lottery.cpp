#include<bits/stdc++.h>
using namespace std;
int func(int a[],int m,int v)
{
	if(v==0)
	return 0;
	int r=INT_MAX;
	for(int i=0;i<m;i++)
	{
		if(a[i]<=v)
		{
			int s=func(a,m,v-a[i]);
			if(s!=INT_MAX && s+1<r)
			r=s+1;
		}
	}
return r;
}
int main()
{
	int a[]={100,20,10,5,1};
	int n,m=5,b;
	cin>>n;
	b=func(a,m,n);
	cout<<b;
}
