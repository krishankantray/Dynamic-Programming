#include<iostream>
#include<vector>
#include<string>
#include<utility>
#include<set>
#include<queue>
#include<stack>
#include<climits>
#include<map>
#include<algorithm>
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
#define ull unsigned long long int
void print(vector<int>v)
{
    for(int i=0; i<v.size(); i++)
    cout<<v[i]<<" ";
    cout<<endl;
}
void solve(vector<int>arr,int n, int sum, vector<int>&v)
{
    if(sum==0)
    {
        print(v);
        //v.clear();
        return;
    }
    if(sum<0 || n<=0)
    return ;
    
    v.push_back(arr[n-1]);
    solve(arr,n-1,sum-arr[n-1],v);
    v.pop_back();
    solve(arr,n-1,sum,v);
}

int main()
{
    
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++)
        cin>>arr[i];
    int sum;
    cin>>sum;
    vector<int>temp;
    solve(arr,arr.size(), sum,temp);
    return 0;
}
