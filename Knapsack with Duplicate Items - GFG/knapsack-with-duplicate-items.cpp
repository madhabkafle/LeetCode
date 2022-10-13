//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
public:
    int knapSack(int n, int w, int val[], int wt[])
    {
      return fun(n,w,val,wt);
    }
    int fun(int ind, int w, int val[], int wt[]){
      vector<vector<int>> dp(ind,vector<int>(w+1,0));
      for(int i=wt[0];i<=w;i++){
          dp[0][i]=((int)(i/wt[0]))*val[0];
      }
        for(int i=1;i<ind;i++){
            for(int j=0;j<=w;j++){
            int not_pick=0+dp[i-1][j];
            int pick=INT_MIN;
            if(wt[i]<=j){
            pick= val[i]+dp[i][j-wt[i]];
            }
            dp[i][j]=max(not_pick,pick);
            }
        }
        return dp[ind-1][w];
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