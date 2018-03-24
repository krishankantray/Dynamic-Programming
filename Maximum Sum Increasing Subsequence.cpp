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
            int arr[n];
            for(int i=0; i<n; ++i) cin>>arr[i];
            vector<int>dp(arr,arr+n);
            dp[0]=arr[0];
            for(int i=1; i<n ;++i)
            {
                for(int j=0; j<i; ++j)
                {
                    if(arr[i]>arr[j])
                        dp[i]=max(dp[i],dp[j]+arr[i]);
                }
            }
            cout<<*max_element(dp.begin(), dp.end());

            return 0;
}
