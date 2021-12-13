#include<bits/stdc++.h>
using namespace std;
int main()
{
	int k,r,i=1,j,a;
	cin>>k>>r;
	j=k%10;
	if(k!=0)
	{
		while(i<=10)
		{
			a=i*j;
			if(a%10==0 || a%10==r)
			{
				cout<<i;
				break;
			}
		i++;
		}
	}
	else
	cout<<i;
	return 0;
}
