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
        int paths(int m, int n )
        {
            if(m==1 && n==1)
                return 1;
            else
                if(m==1)
                    return paths(m,n-1);
                else
                    if(n==1)
                        return paths(m-1,n);
            
            return paths(m,n-1)+paths(m-1,n);//+paths(m-1,n-1);
        }
        int main()
        {
            int m,n;
            cin>>m>>n;
            cout<<paths(m,n);
            return 0;
        }
