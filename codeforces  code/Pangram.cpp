#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,sum=0,flag=0;
	string s;
	cin>>n;
	cin>>s;
	if(n>=26)
	{
		for(int i=0;i<n;i++)
		{
			sum+=s[i];
		}
		if(sum>=2015 && sum<=2847)
		{
			flag=1;
		}
	}
	if(flag!=1)
	cout<<"NO";
	else
	cout<<"YES";
	return 0;
}
