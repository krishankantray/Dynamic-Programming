  #include <bits/stdc++.h>
  #include <cstdio>
  #include <cstring>
  #include <cmath>
  #include <string>
  #include <chrono>
  #include <complex>
  #include <climits>
  
  
  using namespace std;
  int memo[1000][1000];
  int lcs(string a, string b)
  {
    
    int na=a.length();
    int nb= b.length();
    if(memo[na][nb] !=0)
      return memo[na][nb];
    if(na==0 | nb==0)
      return 0;
    if(a[na-1]==b[nb-1])
      return memo[na][nb]= 1+lcs(a.substr(0,na-1),b.substr(0,nb-1));
    return memo[na][nb]= max(lcs(a.substr(0,na-1),b), lcs(a, b.substr(0,nb-1)));
  }
  int main()
  {
     string a="ABCDGH";
     string b="AEDFHR";
     int na=a.length();
     int nb=b.length();
     for(int i=0; i<=na; i++)
      for(int j=0; j<=nb; j++)
        memo[i][j]=0;
     cout<<lcs(a,b);

     return 0;
  }
