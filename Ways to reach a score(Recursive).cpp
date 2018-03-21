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

        int scoreways(int n, int check)
        {
            int a,b,c;
            a=b=c=0;
            if(n==0)
                return 1;
            if(n<0)
                return 0;   
            if(check<=10)
            a= scoreways(n-10,10);
            if(check<=5)
            b=scoreways(n-5,5);
            if(check<=3)
            c=scoreways(n-3,3);

            return a+b+c;
        }
        int main()
        {
            int n;
            cin>>n;
            cout<<scoreways(n,3);
            return 0;
        }
