#include<bits/stdc++.h>
using namespace std;
int main()
{
	stack<int>s;
	int n,count=0,m;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	m=*max_element(a,a+n);
	s.push(a[0]);
	for(int i=1;i<=n;i++)
	{
		if(a[i]<m)
		{
			if(a[i]>=s.top())
			{
				s.push(a[i]);
				count++;]
			}
			else 
			{
				for(int j=0;j<count;j++)
				{
					s.pop();
				}
				s.push(a[i]);
			}
		}
		/*else if(a[i]==m)
		{
			s.push(a[i]);
			break;
		}*/
		else
		break;
	}
	cout<<s.size();
	return 0;
}
