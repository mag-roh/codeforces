#include<bits/stdc++.h>
using namespace std;
int maxPath(int n, int m)
{
	if(n==1 || m==1)
	return 1;
	else
	return maxPath(m-1,n)+maxPath(m,n-1);
	
}
int main()
{
	int m,n;
	cin>>m>>n;
	cout<<maxPath(m,n);
	return 0;
}
	
