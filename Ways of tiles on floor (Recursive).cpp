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
        
        int tiling(int n,int m)
        {
            if(n==m)
                return 2;
            if(n==1)
                return 1;
            if(n<m)
                return tiling(n-1,m);
            return tiling(n-1,m)+tiling(n-m,m);
        }

        int main()
        {
            int n,m;
            cin>>n>>m;
            
            cout<<tiling(n,m);
            return 0;
        }
