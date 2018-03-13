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
        int n;
        cin>>n;
        int arr[n];
        for(int  i=0; i<n ; i++)
            cin>>arr[i];
        int step=arr[0];
        int mx=arr[0];
        int jump=1; 
        for(int i=1; i<n ;i++)
        {
              mx=max(mx,i+arr[i]);
              step--;
              if(step==0)
              {
                ++jump;
                step=mx-i;
              }
        }
        cout<<jump;
        return 0;
    } 
