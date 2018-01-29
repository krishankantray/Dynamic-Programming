//  USERNAME: krishankantray
//  INSTITUTION: Galgotias University

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

int main()
{
	
	int n,m;
	cin>>n>>m;
	int mat[n][m],dp[n][m];
	for(int i=0; i<n; i++)
		for(int j=0; j<m; j++)
			{
				cin>>mat[i][j];
				if(i==0 || j==0) dp[i][j]=mat[i][j];
			}
	
	for(int i=1; i<n; i++)
		for(int j=1; j<m; j++)
		{
			if(mat[i][j]==1)
				dp[i][j]=1+min(min(dp[i-1][j],dp[i][j-1]),dp[i-1][j-1]);
				else
				dp[i][j]=0;
		}
	int imax,jmax,mx=0;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++)
			{ 
				
				if(dp[i][j]>mx)
				{
					mx=dp[i][j];
					imax=i;
					jmax=j;
				}
			}
		
	
	}	
			
	for(int i=imax; i>imax-mx; i--){
		for(int j=jmax; j>jmax-mx; j--)
			{
				cout<<mat[i][j]<<" ";
			}
		cout<<endl;
	}

	return 0;
}