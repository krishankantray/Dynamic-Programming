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

bool subsetsum(int set[], int n, int sum)
{
    if(n<=0 && sum>0)
        return false;
    if(sum==0)
        return true;
    if(set[n]>sum)
        return subsetsum(set,n-1,sum);
    return subsetsum(set,n-1, sum-set[n]) || subsetsum(set,n-1, sum);
}

int main() {

    int n;
    cin>>n;
    int set[n+1];
    int sum;
    for (int i = 1; i <= n ; ++i)
        cin>>set[i];
    cin>>sum;
    if(subsetsum(set,n,sum))
        cout<<"Subset exits";
    else
        cout<<"Not Found";

    return 0;
}
