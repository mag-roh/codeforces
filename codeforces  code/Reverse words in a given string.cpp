#include <bits/stdc++.h>
using namespace std;
string reverseWords(string s);
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        cout<<reverseWords(s)<<endl;
    }
}// } Driver Code Ends


string reverseWords(string S) 
{ 
    string a;
    int j=0;
    stack<char>s;
    for(int i=S.length()-1;i>=0;i--)
    {
        if(S[i]!='.')
        {
            s.push(S[i]);
        }
        else
        {
            while(!s.empty())
            {
              a[j++]=s.top();
              s.pop();
            }
        }
    }
    return a;
    // code here 
} 
