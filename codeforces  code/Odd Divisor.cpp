#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t-->0)
	{
		string s;
		cin>>s;
		int n=s.length();
		if(s[0]=='1')
		cout<<"NO"<<endl;
		else
		{
			if(s[n]=='1' || s[n]=='3' || s[n]=='5' || s[n]=='6' || s[n]=='7' || s[n]=='9' || s[n]=='0')
			{
				cout<<"YES"<<endl;
			}
		}
		
	}
	return 0;
}
