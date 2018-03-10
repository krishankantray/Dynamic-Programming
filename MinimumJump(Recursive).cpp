#include <iostream>
#include <cmath>
#include <climits>
#include <algorithm>
using namespace std;

int minjump(int arr[],int n,int cur)
{
    if(cur==n-1)
        return 0;
    if(arr[cur]==0)
        return INT_MAX;
    int t= INT_MAX;
    for(int i=cur+1; i<=cur+arr[cur] && i<n; i++)
    {
        int jump=1+minjump(arr,n,i);
        t=min(t,jump);
    }
    return t;
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("inp.txt","r",stdin);
    freopen("out.txt","w", stdout);
    #endif
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n ;i++)
        cin>>arr[i];
    cout<<minjump(arr,n,0);
    return 0;
}
