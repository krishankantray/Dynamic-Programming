//  USERNAME: krishankantray
//  INSTITUTION: Galgotias University

//  LIS  Dynamic Approach O(N^2)... I am not able to understand the Recursive approach

#include <iostream>
#include <cstdio>
#include <vector>
#include <set>
#include <climits>
#include <map>
#include <algorithm>
#include <cmath>
#include <utility>
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
#define ull unsigned long long int

int lis(int arr[], int n)
{
	int dp[n];
	fill(dp,dp+n, 1);
	for(int i=1; i<n; i++)
		for(int j=0; j<i; j++)
		{
			if(arr[j]<arr[i] && dp[i]<dp[j]+1)
				dp[i]=dp[j]+1;
		}
	return *max_element(dp,dp+n);
}
int main()
{
	 #ifndef ONLINE_JUDGE
	  freopen("input.txt","r",stdin);
	  freopen("output.txt","w",stdout);
	 #endif
	 int n;
	 cin>>n;
	 int arr[n];
	 for(int i=0; i<n; i++) cin>>arr[i];
	 	cout<<lis(arr,n);
	return 0;
}
