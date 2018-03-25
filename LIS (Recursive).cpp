        // WARNING : This code may be wrong
        //--------------------------------------------
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
        
        int lis(int arr[],int n,int i, int len,int prev)
        {
            if(i==n)
                return len;
            int inc= (arr[i]>prev?lis(arr,n,i+1,len+1,arr[i]):len);
            int exc= lis(arr,n,i+1, len,prev);
            return max(inc,exc);
        }

        int main()
        {
            int n;
            cin>>n;
            int arr[n];
            for(int i=0; i<n; ++i)
                cin>>arr[i];
            cout<<lis(arr,n,0,0,INT_MIN);
            return 0;
        }
