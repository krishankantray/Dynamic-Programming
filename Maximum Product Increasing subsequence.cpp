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
    vector<int>arr={1, 101, 2, 3, 100, 4, 5};
    int n=arr.size();
    vector<int>dp=arr;
    int mx=INT_MIN;
    for(int i=1; i<n; i++)
      for(int j=0; j<i; j++)
    {
      if(arr[i]>arr[j] && dp[i]<arr[i]*dp[j])
        dp[i]=arr[i]*dp[j];
      mx=max(mx,dp[j]);
    }
    cout<<mx;
     return 0;
  }
