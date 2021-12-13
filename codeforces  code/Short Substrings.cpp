#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		for(int i=0;i<s.length();i++)
		{
			if(s[i]==s[i+1])
			{
				s[i+1]=s[i+2];
			}
			cout<<s[i]<<endl;
	    }
	}
	return 0;
}
