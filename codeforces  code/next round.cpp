#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int n,k,i=0,count=0;
	cin>>n>>k;
	while(i<n)
	{
		int a;
		cin>>a;
		if(a>k)
		{
			count++;
		}
		i++;
	}
	cout<<count;
	return 0;
}

