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
	string a,b;
	cin>>a>>b;
	int la=a.length();
	int lb=b.length();
	int dp[la+1][lb+1];
	for(int i=0; i<=la; i++)
		dp[i][0]=i;
	for(int i=0; i<=lb; i++)
		dp[0][i]=i;

	for(int i=1; i<=la; ++i)
		for(int j=1; j<=lb; ++j)
		{

			if(a[i]==b[j])
				dp[i][j]=dp[i-1][j-1];
			else
			{
				dp[i][j]=1+min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1]));
			}
		}
	cout<<dp[la][lb];
	return 0;
}
