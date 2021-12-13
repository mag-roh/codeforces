#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	set<char>a;
	for(char i:s)
	{
		a.insert(i);
	}
	if(a.size()%2==0)
	cout<<"CHAT WITH HER!";
	else
	cout<<"IGNORE HIM!";
	return 0;
}
