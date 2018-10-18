#include<bits/stdc++.h>
using namespace std;
int solve(int arr[], int n, int sum)
{
    int dp[sum+1]={0};
    dp[0]=1;
    for(int s=1; s<=sum; s++)  
    {
        for(int i=0; i<n; i++)
        {
            if(s>=arr[i])
            dp[s]=dp[s]+dp[s-arr[i]];
        }
    }
    return dp[sum];
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    cin>>arr[i];
    int sum;
    cin>>sum;
    
    cout<<solve(arr,n,sum)<<endl;
    
    return 0;
}
