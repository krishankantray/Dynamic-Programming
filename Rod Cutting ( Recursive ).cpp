// USERNAME: krishankantray
// Date: 01-03-2018
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
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
#define ull unsigned long long int

int rod(int len, int price[])
{

    if(len<=0)
        return  0;
    int mx= INT_MIN;
    for(int i=0; i<len ;i++)
    {
        int s = price[i]+rod(len-i-1, price);
        mx=max(mx,s);
    }
    return  mx;
}

int main() {

    int len;
    cin>>len;
    int price[len];
    for(int i=0; i<len; i++)
        cin>>price[i];
    cout<<rod(len,price);
    return 0;
}
