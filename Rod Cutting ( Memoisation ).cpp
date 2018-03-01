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

using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
#define ull unsigned long long int

int rod(int len, int price[], int dp[])
{

    if(len<=0)
        return  0;
    if(dp[len]>=0)
        return dp[len];
    int mx= INT_MIN;
    for(int i=0; i<len ;i++)
    {
        int s = price[i]+rod(len-i-1, price,dp);
        mx=max(mx,s);
        dp[len]=mx;
    }
    return  mx;
}

int main() {

    int len;
    cin>>len;
    int price[len];
    for(int i=0; i<len; i++)
        cin>>price[i];
    int dp[len+1];
    memset(dp,-1,sizeof(dp));
    cout<<rod(len,price,dp);
    return 0;
}
