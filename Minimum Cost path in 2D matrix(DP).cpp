
//  USERNAME: krishankantray
//  INSTITUTION: Galgotias University

//Minimum Cost Path in a 2-D matrix (DP approach)
//https://www.geeksforgeeks.org/dynamic-programming-set-6-min-cost-path/
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
ll A[500][500];
ll min(ll a, ll b, ll c) // for calculating the minimum (long long integer)
{
	if(a<b)
	return (a<c?a:c);
	else
		return(b<c?b:c);
}

ll mincost(int r, int c)  // r and c are target row and column
{
	ll dp[r][c];
	 dp[0][0]=A[0][0];
	for(int i=1; i<c;i++)
		dp[0][i]=dp[0][i-1]+A[0][i];
	for(int i=1; i<r; i++)
		dp[i][0]=dp[i-1][0]+A[i][0];
	for(int i=1; i<r;i++){
		for(int j=1; j<c; j++)
		{
			dp[i][j]=A[i][j]+min(dp[i-1][j-1],dp[i-1][j], dp[i][j-1]);
			
		}
	}
	
	return dp[r-1][c-1];
}

int main()
{
	 #ifndef ONLINE_JUDGE
	  freopen("input.txt","r",stdin);
	  freopen("output.txt","w",stdout);
	 #endif
	 int r,c;
	 cin>>r>>c;
	 for(int i=0; i<r; i++)
	 	for(int j=0; j<c; j++)
	 		cin>>A[i][j];
	cout<<mincost(r,c);
	return 0;
}
