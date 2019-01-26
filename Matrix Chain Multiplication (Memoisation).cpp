#include <bits/stdc++.h> 

using namespace std; 


#define pb push_back
#define vi vector<int>
#define vs vector<string>
#define ALL(a) (a.begin()),(a.end()) // use "ALL(a)" instead if "a.begin(), a.end()"

int dp[1000][1000];
int MatrixChainMultiplication(int arr[], int i, int j)
{
    // Matrix chain multiplication (Recursive)

    if(i+1 >= j)
        return 0;
    int ans=INT_MAX ;
    if(dp[i][j]=-1)
    {
    for(int k=i+1; k<j; k++)
    {
        int cost = MatrixChainMultiplication(arr, i,k)+MatrixChainMultiplication(arr,k,j)+arr[i]*arr[k]*arr[j] ;
        ans=min(ans,cost);
        dp[i][j]=ans;
    }
    }
    return dp[i][j];
}

int main()
{

    int arr[] = { 10, 30, 5, 60 };
    int n = sizeof(arr) / sizeof(arr[0]);
    //==========================================
    for(int i=0; i<6; i++)
    {
        for(int j=0; j<6; j++)
        dp[i][j]=-1 ;
    }
    //==========================================
    
    cout << "Minimum cost is " << MatrixChainMultiplication(arr, 0, n - 1);

    return 0;
}
