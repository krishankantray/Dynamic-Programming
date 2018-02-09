//  USERNAME: krishankantray
//  INSTITUTION: Galgotias University

//Edit first string to convert to second string using three kinds of operations-(i)delete (ii)insert (iii)replace
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
int cost(string str1,string str2,int len1,int len2)
{
	if(len1==0)
		return len2;
	if(len2==0)
		return len1;
	if(str1[len1-1]==str2[len2-1])
		return cost(str1,str2,len1-1,len2-1);
	int del= cost(str1,str2,len1-1,len2) ;
	int insert= cost(str1,str2,len1,len2-1);
	int replace= cost(str1,str2,len1-1,len2-1);
	return 1+min(del,min(insert,replace));
}
int main()
{
	 #ifndef ONLINE_JUDGE
		  freopen("input.txt","r",stdin);
		  freopen("output.txt","w",stdout);
	#endif
	string str1,str2;
	cin>>str1>>str2;
	cout<<cost(str1,str2,str1.length(),str2.length());
	return 0;
}
