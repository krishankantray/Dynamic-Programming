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
        int terminals,stations;
        cin>>terminals>>stations;
        int a[terminals][stations], t[terminals][stations],e[terminals],x[terminals];
        /* here a[][] is for storing delay at each station
                t[][] is for storing delay in changing terminal at a station 
                e[] is for storing delay in entry at each terminal
                x[] is for delay in exititng from each terminal
        */

        //Input a[][]
        for(int i=0; i<terminals; ++i)
            for(int j=0; j<stations; ++j)
                cin>>a[i][j];
        //Input for t[][]
        for(int i=0; i<terminals; ++i)
            for(int j=0; j<stations; ++j)
                cin>>t[i][j];
        //Input for e[]
        for(int i=0; i<terminals; ++i)
            cin>>e[i];
        //Input for x[]
        for(int i=0; i<terminals; ++i)
            cin>>x[i];

        //SOLUTION

        int dp1[stations],dp2[stations]; // either we can start from Terminal 1 or 2 , that's why there are two dp[] arrays.

        dp1[0]=a[0][0]+e[0], dp2[0]=a[1][0]+e[1];

        for(int i=1; i<stations; ++i)
        {
            dp1[i]=min(dp1[i-1]+a[0][i], dp2[i-1]+t[1][i]+a[0][i]);
            dp2[i]=min(dp2[i-1]+a[1][i], dp1[i-1]+t[0][i]+a[1][i]);
        }
        cout<<min(dp1[stations-1]+x[0], dp2[stations-1]+x[1]);
        return 0;
        }
        
/*      Input
        
        2 4
        4 5 3 2
        2 10 1 4
        0 7 4 5
        0 9 2 8
        10 12
        18 7
        
*/
