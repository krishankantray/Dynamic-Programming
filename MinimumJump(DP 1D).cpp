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
        #ifndef ONLINE_JUDGE
        freopen("inp.txt","r",stdin);
        freopen("out.txt","w", stdout);
        #endif
        int n;
        cin>>n;
        int arr[n];
        for(int  i=0; i<n ; i++)
            cin>>arr[i];
        int dp[n];
        dp[0]=0;
        for(int i=1; i<n; i++)
        {
            dp[i]=INT_MAX;
            for(int j=0; j<i; j++)
            {
                if(arr[j]>=(i-j))
                {
                    dp[i]=min(dp[i], 1+dp[j]);
                }
            }
        }
        cout<<dp[n-1];
    } 
