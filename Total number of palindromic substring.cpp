 #include <bits/stdc++.h>
  #include <cstdio>
  #include <cstring>
  #include <cmath>
  #include <string>
  #include <chrono>
  #include <complex>
  #include <climits>
  
  
  using namespace std;
 
  int main()
  {
     string s="abbaeae";
     int n=s.length();
     bool dp[n][n];
     for(int i=0; i<n; i++)
      for(int j=0;j<n; j++)
        dp[i][j]=false;
      for(int i=0;i<n; i++)
        dp[i][i]=true;
//    ------------------------
      for(int i=1;i<n-1; i++)
        if(s[i]==s[i-1])
          dp[i-1][i]=true;
 //   -------------------------
      for(int i=0; i<n-2; i++)
        for(int j=i+2; j<n; j++)
          if(s[i]==s[j] && dp[i+1][j-1]==true)
            dp[i][j]=true;
          int ctr=0;
      for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
          if(dp[i][j]==true)
            ctr++;
          cout<<ctr-s.length();
     return 0;
  }
