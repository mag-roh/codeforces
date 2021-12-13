#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[1000];
	int count=0;
	for(int i=0;i<1000;i++)
	{
		cin>>a[i];
		for(int j=i+1;j<=4;j++)
		{
			if(a[i]==a[j])
			{
				count++;
			}
		}
	}
	cout<<count;
	return 0;
}
