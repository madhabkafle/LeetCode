class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int n= coins.size();
        vector<vector<int>>dp(n+1,vector<int>(amount+1,-1));
        int ans=coin(coins,n-1,amount,dp);
        return ans>=1e9?-1:ans;
    }
    int coin(vector<int>& coins,int ind,int amt,vector<vector<int>>&dp){
        if(ind ==0){
            if(amt%coins[ind]==0)
                return amt/coins[ind];
            else return 1e9;
        } 
      if(dp[ind][amt]>-1)return dp[ind][amt];
      int not_pick=0+ coin(coins,ind-1,amt,dp);
      int pick=INT_MAX;
        if(coins[ind]<=amt){
            pick=1+ coin(coins,ind,amt-coins[ind],dp);
        }
     return dp[ind][amt]=min(pick,not_pick);
    }
};