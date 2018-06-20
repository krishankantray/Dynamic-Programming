#include<bits/stdc++.h>
#include <string>
using namespace std;
string solve(string s)
{
    int n=s.length();
    bool dp[n][n]={false};
    // single character is a palindrome of length one.
    for(int i=0; i<n; i++)
    dp[i][i]=true;
    // check of palindrome of size two exists
    for(int i=0; i<n-1; i++)
    if(s[i]==s[i+1])
    dp[i][i+1]=true;
    int st,mx=-1;
    //for palindrome of size = 3  we make two loops
    for(int len=2 ; len<n; len++) // len is representing index
    {
        for(int i=0; i<n-len; i++)
        {
            // you may replace (i+len) with another variable like ' j '
            if(s[i+len]==s[i] && dp[i+1][i+len-1]) {
                        dp[i][i+len]=true;
                        if(mx < len+1) // since len is the index ( doing for substr() )
                        {              // so, mx = len+1 
                            mx=len+1;
                            st=i;
                        }
                    }
        }
    }
    
    return s.substr(st,mx);

}
int main()
{
    string s= "abadfgdcbc";
    cout<<solve(s);
}
