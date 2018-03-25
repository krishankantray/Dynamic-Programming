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
            int n,m;
            cin>>n>>m;
            int dp[n+1];
            for(int i=0;i<=n; ++i)
            {
                if(i<m)
                    dp[i]=1;
                else
                if(i==m)
                    dp[i]=2;
                else
                {
                    dp[i]=dp[i-1]+dp[i-m];
                }
            }
            cout<<dp[n];
            return 0;
        }
