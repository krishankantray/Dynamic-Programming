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
        
        bool comp(pair<int,int>a, pair<int,int>b)
        {
            return a.second<b.second;
        }
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
            
            sort(a.begin(), a.end(), comp);

            int ctr=1, curr=0;

            for(int i=1; i<n ;++i)
            {
                if(a[i].first >a[curr].second)
                {
                    ++ctr;
                    curr=i;
                }
            }
            cout<<ctr;

            return 0;
        }
