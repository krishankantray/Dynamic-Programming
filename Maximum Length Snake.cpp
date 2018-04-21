    #include <iostream>
    #include <cstdio>
    #include <vector>
    #include <set>
    #include <climits>
    #include <map>
    #include <algorithm>
    #include <cmath>
    #include <utility>
    #include <string>
    #include <cstring>
    #include <deque>
    using namespace std;
    #define ll long long int
    #define pb push_back
    #define mp make_pair
    #define ull unsigned long long int

    void solve(int mat[][4], int m, int n)
    {
        int dp[m][n];
        int mx = INT_MIN;
        int mx_i,mx_j;
        for(int i=0; i<m; i++)
            for(int j=0; j<n; j++)
                dp[i][j]=0;

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++)
            {
                if(i || j)
                {
                    if(i>0)
                    {
                        if(abs(mat[i-1][j]- mat[i][j])==1 ){
                            dp[i][j]=max(dp[i][j], dp[i-1][j]+1);
                            if(dp[i][j]>mx)
                            {
                                mx=dp[i][j];
                                mx_i = i, mx_j=j; 
                            }
                        }
                    }
                    if(j>0)
                    {
                        if(abs(mat[i][j-1]- mat[i][j])==1) {
                            dp[i][j]=max(dp[i][j], dp[i][j-1]+1);
                            if(dp[i][j]>mx)
                            {
                                mx=dp[i][j];
                                mx_i = i, mx_j=j; 
                            }
                        }
                    }


                }

            }
                
        }

           cout<<mx<<endl;

           int i= mx_i;
           int j= mx_j;
           cout<<"["<<i<<" , "<<j<<"]   ";
           while(i>=0 && j>=0)
            {
                
                    if(i==0 && j==0)
                        break;
                    
                    if(dp[i][j]==1+dp[i-1][j])
                    {
                        i--;
                        cout<<"["<<i<<" , "<<j<<"]   ";
                    }
                    else
                    {
                        j--;
                        cout<<"["<<i<<" , "<<j<<"]   ";
                    }
                
            }
    }

    int main() {
        
        int mat[4][4] =
                            {
                                {9, 6, 5, 2},
                                {8, 7, 6, 5},
                                {7, 3, 1, 6},
                                {1, 1, 1, 7},
                            };

        solve(mat,4,4);

    return 0;
    }
