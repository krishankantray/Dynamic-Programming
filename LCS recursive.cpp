  #include <bits/stdc++.h>
  #include <cstdio>
  #include <cstring>
  #include <cmath>
  #include <string>
  #include <chrono>
  #include <complex>
  #include <climits>
  
  
  using namespace std;
  int lcs(string a, string b)
  {
    int na=a.length();
    int nb= b.length();
    if(na==0 | nb==0)
      return 0;
    if(a[na-1]==b[nb-1])
      return 1+lcs(a.substr(0,na-1),b.substr(0,nb-1));
    return max(lcs(a.substr(0,na-1),b), lcs(a, b.substr(0,nb-1)));
  }
  int main()
  {
     string a="AGGTAB";
     string b="GXTXAYB";
     int na=a.length();
     int nb=b.length();
     cout<<lcs(a,b);
     return 0;
  }
