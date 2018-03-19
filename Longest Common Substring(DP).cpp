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
            string a,b;
            cin>>a>>b;
            int dp[1+a.length()][1+b.length()];
            for(int i=0; i<a.length(); ++i) dp[i][0]=0;
            for(int i=0; i<b.length(); ++i) dp[0][i]=0;
            int mx=-1;
            for(int i=1; i<=a.length(); ++i)
            {
                for(int j=1; j<=b.length(); ++j)
                {
                    if(a[i]==b[j])
                    {
                        dp[i][j]=1+dp[i-1][j-1];
                        mx=max(mx,dp[i][j]);
                    }
                    else
                        dp[i][j]=0;
                }
            }
            cout<<mx;
            return 0;
        }
