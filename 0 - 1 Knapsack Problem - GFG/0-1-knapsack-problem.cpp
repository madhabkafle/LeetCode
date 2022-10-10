//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int n) 
    { 
      vector<int> wht;
      vector<int> vals;
      for(int i=0;i<n;i++){
         wht.push_back(wt[i]);
         vals.push_back(val[i]);
      }
      vector<vector<int>>dp(n+1,vector<int>(W+1,-1));       //changing parameters are n and w;
        return fun(n-1,W,wht,vals,dp);
    }
    int fun(int ind,int w,vector<int>&wt,vector<int>&val,vector<vector<int>>&dp){
       if(ind==0){
           if(wt[ind]<=w){
               return val[ind];
           }
           else{
               return 0;
           }
       }
       if(dp[ind][w]!=-1)return dp[ind][w];
       int not_steal= 0+fun(ind-1,w,wt,val,dp);
       int steal=-1e9;
       if(wt[ind]<=w){
       steal=val[ind]+fun(ind-1,w-wt[ind],wt,val,dp);
       }
       return dp[ind][w]=max(steal,not_steal);
    }
};

//{ Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends