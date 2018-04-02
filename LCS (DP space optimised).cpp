    //Krishankant Ray
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
        
        string A,B;
        cin>>A>>B;
        int m=A.length();
        int n=B.length();
        int dp[2][m+1];
        for(int i=0; i<=m; i++) dp[0][i]=0;
        dp[1][0]=0;
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=m; j++ )
            {
                if(B[i-1]==A[j-1])
                {
                    dp[i&1][j]=dp[!(i&1)][j-1]+1;
                }
                else
                    dp[i&1][j]=max(dp[!(i&1)][j], dp[i&1][j-1]);
            }
        }
        cout<<max(dp[0][m],dp[1][m]);
       return 0;
    }
