#include<bits/stdc++.h>
using namespace std;
int main()
{
	int flag=0;
	string s;
	cin>>s;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='H' || s[i]=='Q' || s[i]=='9')
		{
			flag=1;
		}
	}
	if(flag==1)
	cout<<"YES";
	else
	cout<<"NO";
	return 0;
}
