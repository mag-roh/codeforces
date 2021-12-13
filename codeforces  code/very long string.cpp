#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t > 0)
	{
		string s;
		int a;
		cin>>s;
		a=s.length();
		if(a>10)
		cout<<s[0]<<a-2<<s[a-1]<<endl;
		else
		cout<<s<<endl;
		t--;
	}
	return 0;
}
