#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	double a[n],sum=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		sum+=a[i]/n;
	}
	cout<<setprecision(12)<<sum;
	
	return 0;
}
