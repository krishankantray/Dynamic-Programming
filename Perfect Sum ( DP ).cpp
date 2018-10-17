#include<iostream>
#include<vector>
#include<string>
#include<utility>
#include<set>
#include<queue>
#include<stack>
#include<climits>
#include<map>
#include<algorithm>
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
#define ull unsigned long long int
bool dp[10000][10000];
void print(vector<int>&v)
{
    for(int i=0; i<v.size(); i++)
    cout<<v[i]<<" ";
    cout<<endl;
}
void solve(vector<int>&arr, int n, int sum, vector<int>&temp)
{
    if(sum==0)
    {
        print(temp);
        return;
    }
    if(sum<0 || n<0)
    return ;
    
    if(dp[n][sum])
    {
    temp.pb(arr[n-1]);
    solve(arr,n-1, sum-arr[n-1], temp);
    temp.pop_back();
    solve(arr,n-1, sum,temp);
    }
}
int main()
{
    
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++)
        cin>>arr[i];
    
    int sum;
    cin>>sum;
    for(int i=0; i<=n; i++)
    {
        dp[i][0]=true;
    }
    for(int i=1; i<=sum; i++)
    dp[0][i]=false;
    for(int i=1; i<=n; i++)
    {
        for(int j=0; j<=sum; j++)
        if(j-arr[i-1]>=0)
        dp[i][j]=dp[i-1][j]||dp[i-1][j-arr[i-1]];
        else
        dp[i][j]=dp[i-1][j];
    }
    vector<int>temp;
    solve(arr,arr.size(), sum, temp);
    return 0;
}
