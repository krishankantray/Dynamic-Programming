
//  USERNAME: krishankantray
//  INSTITUTION: Galgotias University

//Minimum Cost Path in a 2-D matrix
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
int A[500][500];
ll min(ll a, ll b, ll c) // for calculating the minimum (long long integer)
{
	if(a<b)
	return (a<c?a:c);
	else
		return(b<c?b:c);
}
ll mincost(int r, int c)  // r and c are target row and column
{
	if(r<0 || c<0) return INT_MAX;  //Take care of this its INT_MAX because we need to 
	else							//ignore those cases which does'nt reaches A[0][0].
		if(r==0 && c==0) return A[r][c]; // This base case returns A[0][0] to stop further recursive calls.
	else{
	
	ll t1=A[r][c]+mincost(r-1,c-1);
	ll t2=A[r][c]+mincost(r-1,c);
	ll t3=A[r][c]+mincost(r,c-1);

	return min(t1,t2,t3);
	}
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
	cout<<mincost(r-1,c-1);
	return 0;
}
