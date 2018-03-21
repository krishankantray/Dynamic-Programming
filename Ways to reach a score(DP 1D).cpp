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
            int dp[n+1]={0};
            dp[0]=1;
            int score[]={3,5,10};
            for(int j=0; j<3; ++j)
            for(int i=score[j]; i<=n ;++i)
            {
                dp[i]=dp[i-score[j]]+dp[i];
            }
            cout<<dp[n];
            return 0;
        }
