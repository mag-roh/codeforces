#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int count=0;
    for(int i=0;i<s.length();i++)
	{
		if(s[i]=='4'||s[i]=='7')
		count++;
	}
	cout<<count;
	if(count%10==4 || count%10==7)
	cout<<"No";
	else
	cout<<"Yes";
	return 0;
}
