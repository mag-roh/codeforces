#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	string t;
	int flag=0;
	cin>>s>>t;
	reverse(t.begin(),t.end());
    flag=s.compare(t);
	if(flag==0)
	cout<<"NO";
	else
	cout<<"YES";
	return 0;
}
