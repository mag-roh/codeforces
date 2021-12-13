#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[5],b[5];
	long long int sum=0,sum1=0;
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
		sum+=a[i];
	}
	for(int j=0;j<5;j++)
	{
		cin>>b[j];
		sum1+=b[j];
	}
	if(sum>sum1)
	cout<<"Blue";
	else
	{
		if(sum==sum1)
		cout<<"Red";
		else
		cout<<"Red";
	}
	return 0;
}
