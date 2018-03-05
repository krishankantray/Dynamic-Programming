#include <iostream>
#include <cstdio>
#include <vector>
#include <set>
#include <climits>
#include <map>
#include <algorithm>
#include <cmath>
#include <utility>
#include <string>
#include <cstring>
#include <deque>
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
#define ull unsigned long long int


int main()
{
    #ifndef ONLINE_JUDGE
    freopen("inp.txt","r",stdin);
    freopen("out.txt","w",stdout);
    #endif
    int n;
    cin>>n;
    int set[n+1];
    for(int i=1; i<=n; i++)
        cin>>set[i];
    int sum;
    cin>>sum;
    bool dp[n+1][sum+1];
    for(int i=0; i<=n; i++)
        dp[i][0]=true;
    for(int i=1; i<=sum; ++i)
        dp[0][i]=false;

    for(int i=1; i<=n; i++)
        for(int j=1; j<=sum; j++)
        {
            if(set[i]>j)
                dp[i][j]=dp[i-1][j];
            else
                dp[i][j]=dp[i-1][j] || dp[i-1][j-set[i]];
        }
    if(dp[n][sum])
        cout<<"found";
    else
        cout<<"not found";
    return 0;
}
