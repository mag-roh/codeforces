#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int n=s.length();
	char temp=0;
	for(int i=0;i<n;i+=2)
	{
		for(int j=0;j<n-i-2;j+=2)
		{
			if(s[j]>s[j+2])
			{
			    temp=s[j];
				s[j]=s[j+2];
				s[j+2]=temp;
			}
		}
	}
	cout<<s;
	return 0;	
}
