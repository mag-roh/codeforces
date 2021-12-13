#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m,n,a;
	cin>>m>>n;
	a=int((m*n)/2);
	if((m*n)<256)
	cout<<a;
	else
	cout<<128;
	return 0;
}
