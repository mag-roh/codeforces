#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,sum=0,flag=0;
	cin>>n;
	int a[n][3];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>a[i][j];
			sum+=a[j][i];
		}
		if(sum==0)
		flag=1;
		sum=0;
	}
	if(flag==1)
	cout<<"YES";
	else
	cout<<"NO";
	return 0;
}
