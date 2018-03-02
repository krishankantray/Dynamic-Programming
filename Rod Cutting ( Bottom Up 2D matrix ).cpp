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


int main() {

    int len;
    cin>>len;
    int price[len+1];
    for(int i=1; i<=len; i++)
        cin>>price[i];
    int dp[len+1][len+1];
    for(int i=0; i<=len; i++)
    {
        dp[i][0]=0;
        dp[0][i]=0;
    }
    for(int i=1; i<=len ;i++)
    {
        for(int j=1; j<=len; j++)
        {

            if(i>j)
                dp[i][j]=dp[i-1][j];
            else
                dp[i][j]=max(price[i]+dp[i][j-i], dp[i-1][j]);
        }
    }

   cout<<dp[len][len];

    return 0;
}
