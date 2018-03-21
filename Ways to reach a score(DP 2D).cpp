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
            int n;
            cin>>n;
            int dp[4][n+1];
            for (int i = 0; i < n+1; ++i)
            {
                dp[0][i]=0;
                dp[1][i]=dp[2][i]=dp[3][i]=0;
            }
            dp[0][0]=dp[1][0]=dp[2][0]=dp[3][0]=1;
            int scores[4]={0,3,5,10};
            dp[0][0]=1;
            for(int i=1;i<=3; ++i)
            {
                for(int j=1; j<=n; ++j)
                {
                    if(scores[i]<=j)
                        dp[i][j]=dp[i-1][j]+dp[i][j-scores[i]];
                    else
                        dp[i][j]=dp[i-1][j];
                }
            }
            cout<<dp[3][n];

            return 0;
        }
