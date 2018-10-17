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
int dp[1000000];
int solve(vector<int>arr, int n, int sum)
{
    dp[0]=1;
    int cs=0;
    for(int i=1; i<=sum; i++)
    {
        dp[i]=0;
    }
    for(int i=0; i<n; i++)
    {
        cs+=arr[i];
        for(int j=min(cs,sum); j>=arr[i]; j--)
        {
            dp[j]+=dp[j-arr[i]];
        }
    }
    return dp[sum];
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
    
    cout<<solve(arr,arr.size(), sum);
    return 0;
}
