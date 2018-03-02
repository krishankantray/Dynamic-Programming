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


int main() {

    int len;
    cin>>len;
    int price[len+1];
    for(int i=1; i<=len; i++)
        cin>>price[i];
    int dp[len+1];
    dp[0]=0;
    for(int i=1; i<=len; i++) {
        int mx= INT_MIN;
        for (int j = 1; j <= i; j++) 
            mx=max(mx,price[j]+dp[i-j]);
        dp[i]=mx;
        
    }
    cout<<dp[len];
    return 0;
}
