class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int n= coins.size();
        vector<vector<int>>dp(n+1,vector<int>(amount+1,-1));
        int ans=coin(coins,n,amount);
        return ans>=1e9?-1:ans;
    }
      int coin(vector<int>& coins,int ind,int amt){
         vector<vector<int>>dp(ind,vector<int>(amt+1,0));
        for(int t=0;t<=amt;t++){
            if(t%coins[0]==0)
                dp[0][t]=t/coins[0];
            else
                dp[0][t]=1e9;
        }
      for(int i=1;i<ind;i++){
          for(int t=0;t<=amt;t++ ){
      int not_pick=0+dp[i-1][t];
      int pick=INT_MAX;
        if(coins[i]<=t)
            pick=1+dp[i][t-coins[i]];
              
        dp[i][t]=min(pick,not_pick);
          
        }
      }
      return dp[ind-1][amt];
      
    }
    // int coin(vector<int>& coins,int ind,int amt,vector<vector<int>>&dp){
    //     if(ind ==0){
    //         if(amt%coins[ind]==0)
    //             return amt/coins[ind];
    //         else return 1e9;
    //     } 
    //   if(dp[ind][amt]>-1)return dp[ind][amt];
    //   int not_pick=0+ coin(coins,ind-1,amt,dp);
    //   int pick=INT_MAX;
    //     if(coins[ind]<=amt){
    //         pick=1+ coin(coins,ind,amt-coins[ind],dp);
    //     }
    //  return dp[ind][amt]=min(pick,not_pick);
    // }
};