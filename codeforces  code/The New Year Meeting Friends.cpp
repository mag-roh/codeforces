#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[3],b,c;
	for(int i=0;i<3;i++)
	{
		cin>>a[i];
	}
	sort(a,a+3);
	b=a[1]-a[0];
	c=a[2]-a[1];
	cout<<b+c;
	return 0;
}
