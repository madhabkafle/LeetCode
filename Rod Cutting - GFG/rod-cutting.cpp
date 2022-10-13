//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
  public:
    int cutRod(int price[], int n) {
        int l=n;
        vector<vector<int>> dp(n+1,vector<int>(l+1,-1));
       return maxval(price,n-1,l,dp);
    }
    int maxval(int price[], int ind,int l,vector<vector<int>> &dp){
        if(ind==0){
            return (l*price[0]); //lenght of the material left * value of that material
    }
    if(dp[ind][l]!=-1) return dp[ind][l];
    int not_pick=0+ maxval(price,ind-1,l,dp);
    int pick=INT_MIN;
    int rodlength=ind+1;
    if(rodlength<=l)
    pick=price[ind]+maxval(price,ind,l-rodlength,dp);
    
    return dp[ind][l]=max(pick,not_pick);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) 
            cin >> a[i];
            
        Solution ob;

        cout << ob.cutRod(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends