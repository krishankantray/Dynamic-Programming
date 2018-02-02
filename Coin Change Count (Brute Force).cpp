//  USERNAME: krishankantray
//  INSTITUTION: Galgotias University

//Coin change problem : Counting number of ways making total amount equal to given value.
//This is recursive approach in which all combinations are  unique. 

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
int wayscount(int denominations[],int n, int s)
{
	if(n<0)
		return 0;
	if(s==0)
		return 1;
	if(s<0 && n>=0)
		return 0;
	int ctr= wayscount(denominations,n-1,s)+wayscount(denominations,n,s-denominations[n]);

	return ctr;
}
int main()
{
	 #ifndef ONLINE_JUDGE
	  freopen("input.txt","r",stdin);
	  freopen("output.txt","w",stdout);
	 #endif
	 int n,total;
	 cin>>n;
	 int denominations[n];
	 for(int i=0; i<n; i++) 
	 	cin>>denominations[i];
	 cin>>total;
	 cout<<wayscount(denominations,n-1,total);
	return 0;
}
