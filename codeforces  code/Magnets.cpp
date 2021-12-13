#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,count1=0,count2=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]==10 && a[i+1]==10 || a[i]==01 && a[i+1]==01)
		{
			count1++;
		}
		else if(a[i]==01 && a[i+1]!=01 || a[i]==10 && a[i+1]!=10)
		{
			count2++;
		}
	}
	cout<<count1+count2;
	return 0;
}
