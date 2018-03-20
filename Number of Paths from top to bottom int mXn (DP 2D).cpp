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
            int m,n;
            cin>>m>>n;
            int dp[m][n];
            for (int i = 0; i < n; ++i)
            {
                dp[0][i]=1;
            }

            for (int i = 0; i < m; ++i)
            {
                dp[i][0]=1;
            }
            for(int i=1; i<m; ++i)
            {
                for(int j=1; j<n; ++j)
                {
                    dp[i][j]=dp[i-1][j]+dp[i][j-1]; // if diagonal motion is  allowed then also add dp[i-1][j-1]
                }
            }
            cout<<dp[m-1][n-1];
            return 0;
        }
