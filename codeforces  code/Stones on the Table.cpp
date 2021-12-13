#include<bits/stdc++.h>
using namespace std;
int main()
{
	stack<char>s;
	int n,count=0;
	cin>>n;
	char a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	s.push(a[0]);
	for(int i=1;i<n;i++)
	{
		if(a[i]==s.top())
		{
			s.pop();
			count++;
			s.push(a[i]);
		}
		else
		{
			s.push(a[i]);
		}
	}
	cout<<count;
	return 0;
}
