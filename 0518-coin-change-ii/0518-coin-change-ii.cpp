class Solution {
public:
    int change(int amount, vector<int>& coins) {
        int n= coins.size();
        vector<vector<int>> dp(n+1,vector<int>(amount+1,-1));
        int ans=coin(coins,n-1,amount,dp);
        return ans;
    }
    int coin(vector<int>& coins,int ind,int amt,vector<vector<int>> &dp){
        if(ind ==0){
            return amt%coins[ind]==0;
        } 
        if(dp[ind][amt]!=-1) return dp[ind][amt];
      int not_pick=coin(coins,ind-1,amt,dp);
      int pick=0;
        if(coins[ind]<=amt){
            pick=coin(coins,ind,amt-coins[ind],dp);
        }
     return  dp[ind][amt]=pick+not_pick;;
    }
};