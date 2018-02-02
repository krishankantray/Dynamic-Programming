//  USERNAME: krishankantray
//  INSTITUTION: Galgotias University

//Coin change problem : Counting number of ways making total amount equal to given value.
//This is recursive approach in which all combinations are not unique. 
// For eg: den[]={1,2,3} and total=4 ::  {1,1,1,1}, {2,2},{1,1,2}*,{1,2,1}*,{2,1,1}*,{3,1}',{1,3}'
// So, the output will be 7 rather than 4
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
#define ull unsigned long long int
map<pair<int,int>,int>mp;

int mincount(int den[], int n, int total)
{
	if(total==0)
		return 1;
	if(total <0 || n<0)
		return 0;
	pair<int,int>p=make_pair(n,total);
	if(mp.find(p) != mp.end())
		return mp[p];
	
	int exec= mincount(den,n-1,total);
	int inc= mincount(den,n,total-den[n]);
	mp[p]=exec+inc;
	
	return mp[p];

}

int main()
{
	 #ifndef ONLINE_JUDGE
		  freopen("input.txt","r",stdin);
		  freopen("output.txt","w",stdout);
	 #endif

	int n,total;
	cin>>n;
	int den[n];
	for(int i=0; i<n; i++) cin>>den[i];
	cin>>total;
	cout<<mincount(den,n-1,total);
	return 0;
}
