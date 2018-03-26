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
       
       int count(int n, int left, int right)
       {
            if(n==1 && abs(left-right)==0)
                return 2;
            if(n==1 && abs(left-right)==1)
                return 1;
            if(n==1 && abs(left-right)>1)
                return 0;
            return count(n-1, left,right)+count(n-1,left+1,right+1)+count(n-1, left+1,right)+count(n-1,left,right+1);
       }

        int main()
        {
            int n;
            cin>>n;
            cout<<count(n,0,0);
            return 0;
        }
