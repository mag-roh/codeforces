#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,sum=0,e=0,o=0;
	cin>>n;
	while(n!=0)
	{
		if(n&1)
		o++;
		if(n&2)
		e++;
	n=n>>2;
	}
	if(abs(o-e)%3==0)
	cout<<"YES";
	else
	cout<<"NO";
	return 0;
}
