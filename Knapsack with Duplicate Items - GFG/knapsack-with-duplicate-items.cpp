//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
public:
    int knapSack(int n, int w, int val[], int wt[])
    {
        vector<vector<int>> dp(n+1,vector<int>(w+1,-1));
      return fun(n-1,w,val,wt,dp);
    }
    int fun(int ind, int w, int val[], int wt[], vector<vector<int>> &dp){
        if(ind==0)
            return (w/wt[0])*val[0];

        if(dp[ind][w]!=-1)return dp[ind][w];
        int not_pick=0+fun(ind-1,w,val,wt,dp);
        int pick=INT_MIN;
        if(wt[ind]<=w)
        pick= val[ind]+fun(ind,w-wt[ind],val,wt,dp);
        
        return dp[ind][w]=max(not_pick,pick);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, W;
        cin>>N>>W;
        int val[N], wt[N];
        for(int i = 0;i < N;i++)
            cin>>val[i];
        for(int i = 0;i < N;i++)
            cin>>wt[i];
        
        Solution ob;
        cout<<ob.knapSack(N, W, val, wt)<<endl;
    }
    return 0;
}
// } Driver Code Ends