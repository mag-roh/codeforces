#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	vector<int>v;
	for(int i=1;i<=3000;i++)
	{
		if(i%3==0 || i%10==3 || i%100==3 || i%1000==3)
		continue;
		v.push_back(i);
	}
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<<v[n-1]<<endl;
	}
	return 0;
}
