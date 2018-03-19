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
            // Maximum length of chain pair
            int n;
            cin>>n;
            vector<pair<int,int> >a;
            int f,s;
            for(int i=0; i<n; ++i)
            {
                cin>>f>>s;
                a.push_back(mp(f,s));
            }
            
            vector<int>dp(n,1);
            for(int i=1; i<n; ++i)
            {
                for(int j=0; j<i; ++j)
                {
                    if(a[j].second<a[i].first)
                    {
                        dp[i]=max(dp[i],1+dp[j]);
                    }
                }
            }

            cout<<*max_element(dp.begin(), dp.end());

            return 0;
        }
