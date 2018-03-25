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
        
        int mslis(int arr[],int n,int i, int sum,int prev)
        {
            if(i==n)
                return sum;
            int inc= (arr[i]>prev?mslis(arr,n,i+1,sum+arr[i],arr[i]):sum);
            int exc= mslis(arr,n,i+1, sum,prev);
            return max(inc,exc);
        }

        int main()
        {
            int n;
            cin>>n;
            int arr[n];
            for(int i=0; i<n; ++i)
                cin>>arr[i];
            cout<<mslis(arr,n,0,0,INT_MIN);
            return 0;
        }
