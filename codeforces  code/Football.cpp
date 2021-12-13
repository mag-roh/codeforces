#include<bits/stdc++.h>
using namespace std;
int main()
{
	char s[101];
    gets(s);
	if(strstr(s,"1111111") || strstr(s,"0000000"))
	cout<<"YES";
	else
	cout<<"NO";
	return 0;
}
